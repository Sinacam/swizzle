#ifndef SWIZZLE_HPP_INCLUDED
#define SWIZZLE_HPP_INCLUDED

// swizzle is a C++ standard-compliant implementation of glsl vector swizzling.
//      swzl::dvec4 v1 = {1, 2, 3, 4};
//      swzl::dvec4 v2 = v1.xxyy;
//      v2.yxz = v1.rgb;
//      v2.spt = swzl::dvec3{5, 6, 7};
// The only non-compliant component is operator[]
//      v2[1] = 42;
// Although it is almost certainly going to work on all platforms. It is only
// non-compliant if you use it.
// vecN<T> is the template for a vector of N elements of type T.
// dvecN, fvecN, ivecN are aliases to its specialization.
// All swizzles have unspecified types, but is guaranteed to be unique to swizzle.

#include <type_traits>
#include <utility>

namespace swzl
{
    using std::size_t;

    template <typename>
    union vec2;

    template <typename>
    union vec3;

    template <typename>
    union vec4;
}

namespace swzl::detail
{
    // is_swizzlable_func returns std::true_type if Swizzler can be assigned to Vector
    // and that they are indeed a swizzler and a vector. Otherwise, returns std::false_type.
    template <typename Vector, typename Swizzler>
    constexpr auto is_swizzlable_func(float) -> std::false_type;

    template <typename Vector, typename Swizzler>
    constexpr auto is_swizzlable_func(int)
        -> std::bool_constant<std::decay_t<Vector>::dimension::value ==
                              std::decay_t<Swizzler>::dimension::value>;

    template <typename Vector, typename Swizzler>
    struct is_swizzlable : decltype(is_swizzlable_func<Vector, Swizzler>(0))
    {
    };

    template <typename Vector, typename Swizzler>
    inline constexpr auto is_swizzlable_v = is_swizzlable<Vector, Swizzler>::value;

    template<typename T>
    constexpr auto dimension_func(float) -> std::integral_constant<size_t, 0>;

    template<typename T>
    constexpr auto dimension_func(int) -> typename T::dimension;

    template<typename T>
    struct dimension : decltype(dimension_func<T>(0)) {};

    template<typename T>
    inline constexpr auto dimension_v = dimension<T>::value;

    template<typename T>
    struct is_vec_like : std::bool_constant<(dimension_v<T> > 0)> {};

    template<typename T>
    inline constexpr auto is_vec_like_v = is_vec_like<T>::value;

    template<size_t n, typename T>
    struct vec_of;

    template<typename T>
    struct vec_of<2, T>
    {
        using type = vec2<T>;
    };

    template<typename T>
    struct vec_of<3, T>
    {
        using type = vec3<T>;
    };

    template<typename T>
    struct vec_of<4, T>
    {
        using type = vec4<T>;
    };

    template<size_t n, typename T>
    using vec_of_t = typename vec_of<n, T>::type;

    template <typename Vector, typename Swizzler>
    using enable_if_swizzlable_t = std::enable_if_t<is_swizzlable_v<Vector, Swizzler>, int>;

    template <typename From, typename To>
    using enable_if_convertible_t = std::enable_if_t<std::is_convertible_v<From, To>, int>;
} // namespace swzl::detail

// The following macros is undefined at the end of file, they are only used to
// generate members.
// Each of VEC_XXX is used to define a member struct named the first few arguments concatenated.
// The first few arguments also defines the semantics of assignment and swizzle_to,
// which is the implementation of swizzling.
// The trailing arguments are the names of the member variables.
// The structs are all layout-compatible, allowing union access to any of them legally.
// These macros are then used within vec_mem.hpp to define VECN_MEMBER, which exhaustively
// lists all possible combinations of swizzling.

#define VEC_BASIC(var, ...)                                                                        \
    struct                                                                                         \
    {                                                                                              \
        T __VA_ARGS__;                                                                             \
        auto& operator=(T rhs)                                                                     \
        {                                                                                          \
            var = rhs;                                                                             \
            return *this;                                                                          \
        }                                                                                          \
        operator T&() & { return var; }                                                            \
        operator const T&() const& { return var; }                                                 \
        operator T() && { return var; }                                                            \
        T* operator&() { return &var; }                                                            \
    } var

#define VEC_SWIZZLE2(varx, vary, ...)                                                              \
    struct                                                                                         \
    {                                                                                              \
        using value_type = T;                                                                      \
        using dimension = std::integral_constant<size_t, 2>;                             \
        T __VA_ARGS__;                                                                             \
        template <typename Rhs, detail::enable_if_convertible_t<Rhs, vec2<T>> = 0>                 \
        auto& operator=(Rhs rhs)                                                                   \
        {                                                                                          \
            vec2<T> v = rhs;                                                                       \
            varx = v.x;                                                                            \
            vary = v.y;                                                                            \
            return *this;                                                                          \
        }                                                                                          \
        template <typename Vec2>                                                                   \
        void swizzle_to(Vec2&& v)                                                                  \
        {                                                                                          \
            v.x = varx;                                                                            \
            v.y = vary;                                                                            \
        }                                                                                          \
    } varx##vary

#define VEC_SWIZZLE3(varx, vary, varz, ...)                                                        \
    struct                                                                                         \
    {                                                                                              \
        using value_type = T;                                                                      \
        using dimension = std::integral_constant<size_t, 3>;                             \
        T __VA_ARGS__;                                                                             \
        template <typename Rhs, detail::enable_if_convertible_t<Rhs, vec3<T>> = 0>                 \
        auto& operator=(Rhs rhs)                                                                   \
        {                                                                                          \
            vec3<T> v = rhs;                                                                       \
            varx = v.x;                                                                            \
            vary = v.y;                                                                            \
            varz = v.z;                                                                            \
            return *this;                                                                          \
        }                                                                                          \
        template <typename Vec3>                                                                   \
        void swizzle_to(Vec3&& v)                                                                  \
        {                                                                                          \
            v.x = varx;                                                                            \
            v.y = vary;                                                                            \
            v.z = varz;                                                                            \
        }                                                                                          \
    } varx##vary##varz

#define VEC_SWIZZLE4(varx, vary, varz, varw, ...)                                                  \
    struct                                                                                         \
    {                                                                                              \
        using value_type = T;                                                                      \
        using dimension = std::integral_constant<size_t, 4>;                             \
        T __VA_ARGS__;                                                                             \
        template <typename Rhs, detail::enable_if_convertible_t<Rhs, vec4<T>> = 0>                 \
        auto& operator=(Rhs rhs)                                                                   \
        {                                                                                          \
            vec4<T> v = rhs;                                                                       \
            varx = v.x;                                                                            \
            vary = v.y;                                                                            \
            varz = v.z;                                                                            \
            varw = v.w;                                                                            \
            return *this;                                                                          \
        }                                                                                          \
        template <typename Vec4>                                                                   \
        void swizzle_to(Vec4&& v)                                                                  \
        {                                                                                          \
            v.x = varx;                                                                            \
            v.y = vary;                                                                            \
            v.z = varz;                                                                            \
            v.w = varw;                                                                            \
        }                                                                                          \
    } varx##vary##varz##varw

#include "vec_mem.hpp"

namespace swzl
{
    template <typename T>
    union vec2
    {
        using value_type = T;
        using dimension = std::integral_constant<size_t, 2>;
        VEC2_MEMBER(x, y);
        VEC2_MEMBER(r, g);
        VEC2_MEMBER(s, t);

        vec2() : vec2(0, 0) {}

        vec2(T x1, T x2)
        {
            x = x1;
            y = x2;
        }

        template <typename Swizzler, detail::enable_if_swizzlable_t<vec2, Swizzler> = 0>
        vec2(Swizzler s) : vec2()
        {
            s.swizzle_to(*this);
        }

        template <typename Swizzler, detail::enable_if_swizzlable_t<vec2, Swizzler> = 0>
        auto& operator=(Swizzler s)
        {
            s.swizzle_to(*this);
            return *this;
        }

        auto& operator+=(vec2 rhs)
        {
            x += rhs.x;
            y += rhs.y;
            return *this;
        }

        auto operator+(vec2 rhs)
        {
            auto tmp = *this;
            return tmp += rhs;
        }

        auto& operator-=(vec2 rhs)
        {
            x -= rhs.x;
            y -= rhs.y;
            return *this;
        }

        auto operator-(vec2 rhs)
        {
            auto tmp = *this;
            return tmp -= rhs;
        }

        auto& operator*=(T rhs)
        {
            x *= rhs;
            y *= rhs;
            return *this;
        }

        auto operator*(T rhs)
        {
            auto tmp = *this;
            return tmp *= rhs;
        }

        auto& operator/=(T rhs)
        {
            x /= rhs;
            y /= rhs;
            return *this;
        }

        auto operator/(T rhs)
        {
            auto tmp = *this;
            return tmp /= rhs;
        }

        auto& operator[](int i) { return ((T*)this)[i]; }
    };

    template <typename Swizzler>
    vec2(Swizzler) -> vec2<typename Swizzler::value_type>;

    template <typename T>
    union vec3
    {
        using value_type = T;
        using dimension = std::integral_constant<size_t, 3>;
        VEC3_MEMBER(x, y, z);
        VEC3_MEMBER(r, g, b);
        VEC3_MEMBER(s, t, p);

        vec3() : vec3(0, 0, 0) {}

        vec3(T x1, T x2, T x3)
        {
            x = x1;
            y = x2;
            z = x3;
        }

        template <typename Swizzler, detail::enable_if_swizzlable_t<vec3, Swizzler> = 0>
        vec3(Swizzler s) : vec3()
        {
            s.swizzle_to(*this);
        }

        template <typename Swizzler, detail::enable_if_swizzlable_t<vec3, Swizzler> = 0>
        auto& operator=(Swizzler s)
        {
            s.swizzle_to(*this);
            return *this;
        }

        auto& operator+=(vec3 rhs)
        {
            x += rhs.x;
            y += rhs.y;
            z += rhs.z;
            return *this;
        }

        auto operator+(vec3 rhs)
        {
            auto tmp = *this;
            return tmp += rhs;
        }

        auto& operator-=(vec3 rhs)
        {
            x -= rhs.x;
            y -= rhs.y;
            z -= rhs.z;
            return *this;
        }

        auto operator-(vec3 rhs)
        {
            auto tmp = *this;
            return tmp -= rhs;
        }

        auto& operator*=(T rhs)
        {
            x *= rhs;
            y *= rhs;
            z *= rhs;
            return *this;
        }

        auto operator*(T rhs)
        {
            auto tmp = *this;
            return tmp *= rhs;
        }

        auto& operator/=(T rhs)
        {
            x /= rhs;
            y /= rhs;
            z /= rhs;
            return *this;
        }

        auto operator/(T rhs)
        {
            auto tmp = *this;
            return tmp /= rhs;
        }

        auto& operator[](int i) { return ((T*)this)[i]; }
    };

    template <typename Swizzler>
    vec3(Swizzler) -> vec3<typename Swizzler::value_type>;

    template <typename T>
    union vec4
    {
        using value_type = T;
        using dimension = std::integral_constant<size_t, 4>;
        VEC4_MEMBER(x, y, z, w);
        VEC4_MEMBER(r, g, b, a);
        VEC4_MEMBER(s, t, p, q);

        vec4() : vec4(0, 0, 0, 0) {}

        vec4(T x1, T x2, T x3, T x4)
        {
            x = x1;
            y = x2;
            z = x3;
            w = x4;
        }

        template <typename Swizzler, detail::enable_if_swizzlable_t<vec4, Swizzler> = 0>
        vec4(Swizzler s) : vec4()
        {
            s.swizzle_to(*this);
        }

        template <typename Swizzler, detail::enable_if_swizzlable_t<vec4, Swizzler> = 0>
        auto& operator=(Swizzler s)
        {
            s.swizzle_to(*this);
            return *this;
        }

        auto& operator+=(vec4 rhs)
        {
            x += rhs.x;
            y += rhs.y;
            z += rhs.z;
            w += rhs.w;
            return *this;
        }

        auto operator+(vec4 rhs)
        {
            auto tmp = *this;
            return tmp += rhs;
        }

        auto& operator-=(vec4 rhs)
        {
            x -= rhs.x;
            y -= rhs.y;
            z -= rhs.z;
            w -= rhs.w;
            return *this;
        }

        auto operator-(vec4 rhs)
        {
            auto tmp = *this;
            return tmp -= rhs;
        }

        auto& operator*=(T rhs)
        {
            x *= rhs;
            y *= rhs;
            z *= rhs;
            w *= rhs;
            return *this;
        }

        auto operator*(T rhs)
        {
            auto tmp = *this;
            return tmp *= rhs;
        }

        auto& operator/=(T rhs)
        {
            x /= rhs;
            y /= rhs;
            z /= rhs;
            w /= rhs;
            return *this;
        }

        auto operator/(T rhs)
        {
            auto tmp = *this;
            return tmp /= rhs;
        }


        auto& operator[](int i) { return ((T*)this)[i]; }
    };

    template <typename Swizzler>
    vec4(Swizzler) -> vec4<typename Swizzler::value_type>;

    template<typename Vec>
    struct is_vec : std::false_type {};

    template<typename T>
    struct is_vec<vec2<T>> : std::true_type {};

    template<typename T>
    struct is_vec<vec3<T>> : std::true_type {};

    template<typename T>
    struct is_vec<vec4<T>> : std::true_type {};

    template<typename T>
    inline constexpr auto is_vec_v = is_vec<T>::value;

    template<typename Vec, std::enable_if_t<is_vec_v<Vec>, int> = 0>
    inline auto operator*(typename Vec::value_type s, Vec v)
    {
        return v * s;
    }

    using fvec2 = vec2<float>;
    using dvec2 = vec2<double>;
    using ivec2 = vec2<int>;
    using fvec3 = vec3<float>;
    using dvec3 = vec3<double>;
    using ivec3 = vec3<int>;
    using fvec4 = vec4<float>;
    using dvec4 = vec4<double>;
    using ivec4 = vec4<int>;
} // namespace swzl

#undef VEC_BASIC
#undef VEC_SWIZZLE2
#undef VEC_SWIZZLE3
#undef VEC_SWIZZLE4
#undef VEC2_MEMBER
#undef VEC3_MEMBER
#undef VEC4_MEMBER

#endif
