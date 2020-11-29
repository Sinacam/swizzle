# swizzle
swizzle is a C++ standard-compliant implementation of [GLSL vector swizzling][2], i.e. referring to components in arbitrary combinations.

```c++
swzl::dvec4 v1 = {1, 2, 3, 4};
swzl::dvec4 v2 = v1.xxyy;
v2.yxz = v1.rgb;
v2.spt = swzl::dvec3{5, 6, 7};
```

The only non-compliant component is `operator[]`

```c++
v2[1] = 42;
```

Although it is almost certainly going to work on all platforms. It is only non-compliant if you use it.  
`vecN<T>` is the template for a vector of `N` elements of type `T`. `dvecN`, `fvecN`, `ivecN` are aliases to its specialization for `double`, `float`, `int`.  
All swizzles have unspecified types, but is guaranteed to be unique to swizzle.

## Installation
swizzle is header only, just `#include"swizzle.hpp"`. Requires C++17.

## Remarks
Swizzles are _not_ proxy types
```c++
auto xyz = swzl::vec4{1, 2, 3, 4}.xyz;  // ok
auto rgb = []{ swzl::vec4 v{2, 3, 4, 5}; return v.rgb; }(); // ok
```

## Acknowledgements
[eerorika][1] for the union/struct hack.

[1]: https://stackoverflow.com/a/65027725/4832499
[2]: http://learnwebgl.brown37.net/12_shader_language/glsl_data_types.html#vector-components
