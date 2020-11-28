#define VEC2_MEMBER(x, y)                                                                          \
    VEC_BASIC(x, x, y);                                                                            \
    VEC_BASIC(y, x, y);                                                                            \
    VEC_SWIZZLE2(x, x, x, y);                                                                      \
    VEC_SWIZZLE2(x, y, x, y);                                                                      \
    VEC_SWIZZLE2(y, x, x, y);                                                                      \
    VEC_SWIZZLE2(y, y, x, y)

#define VEC3_MEMBER(x, y, z)                                                                       \
    VEC_BASIC(x, x, y, z);                                                                         \
    VEC_BASIC(y, x, y, z);                                                                         \
    VEC_BASIC(z, x, y, z);                                                                         \
    VEC_SWIZZLE2(x, x, x, y, z);                                                                   \
    VEC_SWIZZLE2(x, y, x, y, z);                                                                   \
    VEC_SWIZZLE2(x, z, x, y, z);                                                                   \
    VEC_SWIZZLE2(y, x, x, y, z);                                                                   \
    VEC_SWIZZLE2(y, y, x, y, z);                                                                   \
    VEC_SWIZZLE2(y, z, x, y, z);                                                                   \
    VEC_SWIZZLE2(z, x, x, y, z);                                                                   \
    VEC_SWIZZLE2(z, y, x, y, z);                                                                   \
    VEC_SWIZZLE2(z, z, x, y, z);                                                                   \
    VEC_SWIZZLE3(x, x, x, x, y, z);                                                                \
    VEC_SWIZZLE3(x, x, y, x, y, z);                                                                \
    VEC_SWIZZLE3(x, x, z, x, y, z);                                                                \
    VEC_SWIZZLE3(x, y, x, x, y, z);                                                                \
    VEC_SWIZZLE3(x, y, y, x, y, z);                                                                \
    VEC_SWIZZLE3(x, y, z, x, y, z);                                                                \
    VEC_SWIZZLE3(x, z, x, x, y, z);                                                                \
    VEC_SWIZZLE3(x, z, y, x, y, z);                                                                \
    VEC_SWIZZLE3(x, z, z, x, y, z);                                                                \
    VEC_SWIZZLE3(y, x, x, x, y, z);                                                                \
    VEC_SWIZZLE3(y, x, y, x, y, z);                                                                \
    VEC_SWIZZLE3(y, x, z, x, y, z);                                                                \
    VEC_SWIZZLE3(y, y, x, x, y, z);                                                                \
    VEC_SWIZZLE3(y, y, y, x, y, z);                                                                \
    VEC_SWIZZLE3(y, y, z, x, y, z);                                                                \
    VEC_SWIZZLE3(y, z, x, x, y, z);                                                                \
    VEC_SWIZZLE3(y, z, y, x, y, z);                                                                \
    VEC_SWIZZLE3(y, z, z, x, y, z);                                                                \
    VEC_SWIZZLE3(z, x, x, x, y, z);                                                                \
    VEC_SWIZZLE3(z, x, y, x, y, z);                                                                \
    VEC_SWIZZLE3(z, x, z, x, y, z);                                                                \
    VEC_SWIZZLE3(z, y, x, x, y, z);                                                                \
    VEC_SWIZZLE3(z, y, y, x, y, z);                                                                \
    VEC_SWIZZLE3(z, y, z, x, y, z);                                                                \
    VEC_SWIZZLE3(z, z, x, x, y, z);                                                                \
    VEC_SWIZZLE3(z, z, y, x, y, z);                                                                \
    VEC_SWIZZLE3(z, z, z, x, y, z)

// Generated by https://play.golang.org/p/XgBtiNZLvqX
#define VEC4_MEMBER(w, x, y, z)                                                                    \
    VEC_BASIC(x, x, y, z, w);                                                                      \
    VEC_BASIC(y, x, y, z, w);                                                                      \
    VEC_BASIC(z, x, y, z, w);                                                                      \
    VEC_BASIC(w, x, y, z, w);                                                                      \
    VEC_SWIZZLE2(x, x, x, y, z, w);                                                                \
    VEC_SWIZZLE2(x, y, x, y, z, w);                                                                \
    VEC_SWIZZLE2(x, z, x, y, z, w);                                                                \
    VEC_SWIZZLE2(x, w, x, y, z, w);                                                                \
    VEC_SWIZZLE2(y, x, x, y, z, w);                                                                \
    VEC_SWIZZLE2(y, y, x, y, z, w);                                                                \
    VEC_SWIZZLE2(y, z, x, y, z, w);                                                                \
    VEC_SWIZZLE2(y, w, x, y, z, w);                                                                \
    VEC_SWIZZLE2(z, x, x, y, z, w);                                                                \
    VEC_SWIZZLE2(z, y, x, y, z, w);                                                                \
    VEC_SWIZZLE2(z, z, x, y, z, w);                                                                \
    VEC_SWIZZLE2(z, w, x, y, z, w);                                                                \
    VEC_SWIZZLE2(w, x, x, y, z, w);                                                                \
    VEC_SWIZZLE2(w, y, x, y, z, w);                                                                \
    VEC_SWIZZLE2(w, z, x, y, z, w);                                                                \
    VEC_SWIZZLE2(w, w, x, y, z, w);                                                                \
    VEC_SWIZZLE3(x, x, x, x, y, z, w);                                                             \
    VEC_SWIZZLE3(x, x, y, x, y, z, w);                                                             \
    VEC_SWIZZLE3(x, x, z, x, y, z, w);                                                             \
    VEC_SWIZZLE3(x, x, w, x, y, z, w);                                                             \
    VEC_SWIZZLE3(x, y, x, x, y, z, w);                                                             \
    VEC_SWIZZLE3(x, y, y, x, y, z, w);                                                             \
    VEC_SWIZZLE3(x, y, z, x, y, z, w);                                                             \
    VEC_SWIZZLE3(x, y, w, x, y, z, w);                                                             \
    VEC_SWIZZLE3(x, z, x, x, y, z, w);                                                             \
    VEC_SWIZZLE3(x, z, y, x, y, z, w);                                                             \
    VEC_SWIZZLE3(x, z, z, x, y, z, w);                                                             \
    VEC_SWIZZLE3(x, z, w, x, y, z, w);                                                             \
    VEC_SWIZZLE3(x, w, x, x, y, z, w);                                                             \
    VEC_SWIZZLE3(x, w, y, x, y, z, w);                                                             \
    VEC_SWIZZLE3(x, w, z, x, y, z, w);                                                             \
    VEC_SWIZZLE3(x, w, w, x, y, z, w);                                                             \
    VEC_SWIZZLE3(y, x, x, x, y, z, w);                                                             \
    VEC_SWIZZLE3(y, x, y, x, y, z, w);                                                             \
    VEC_SWIZZLE3(y, x, z, x, y, z, w);                                                             \
    VEC_SWIZZLE3(y, x, w, x, y, z, w);                                                             \
    VEC_SWIZZLE3(y, y, x, x, y, z, w);                                                             \
    VEC_SWIZZLE3(y, y, y, x, y, z, w);                                                             \
    VEC_SWIZZLE3(y, y, z, x, y, z, w);                                                             \
    VEC_SWIZZLE3(y, y, w, x, y, z, w);                                                             \
    VEC_SWIZZLE3(y, z, x, x, y, z, w);                                                             \
    VEC_SWIZZLE3(y, z, y, x, y, z, w);                                                             \
    VEC_SWIZZLE3(y, z, z, x, y, z, w);                                                             \
    VEC_SWIZZLE3(y, z, w, x, y, z, w);                                                             \
    VEC_SWIZZLE3(y, w, x, x, y, z, w);                                                             \
    VEC_SWIZZLE3(y, w, y, x, y, z, w);                                                             \
    VEC_SWIZZLE3(y, w, z, x, y, z, w);                                                             \
    VEC_SWIZZLE3(y, w, w, x, y, z, w);                                                             \
    VEC_SWIZZLE3(z, x, x, x, y, z, w);                                                             \
    VEC_SWIZZLE3(z, x, y, x, y, z, w);                                                             \
    VEC_SWIZZLE3(z, x, z, x, y, z, w);                                                             \
    VEC_SWIZZLE3(z, x, w, x, y, z, w);                                                             \
    VEC_SWIZZLE3(z, y, x, x, y, z, w);                                                             \
    VEC_SWIZZLE3(z, y, y, x, y, z, w);                                                             \
    VEC_SWIZZLE3(z, y, z, x, y, z, w);                                                             \
    VEC_SWIZZLE3(z, y, w, x, y, z, w);                                                             \
    VEC_SWIZZLE3(z, z, x, x, y, z, w);                                                             \
    VEC_SWIZZLE3(z, z, y, x, y, z, w);                                                             \
    VEC_SWIZZLE3(z, z, z, x, y, z, w);                                                             \
    VEC_SWIZZLE3(z, z, w, x, y, z, w);                                                             \
    VEC_SWIZZLE3(z, w, x, x, y, z, w);                                                             \
    VEC_SWIZZLE3(z, w, y, x, y, z, w);                                                             \
    VEC_SWIZZLE3(z, w, z, x, y, z, w);                                                             \
    VEC_SWIZZLE3(z, w, w, x, y, z, w);                                                             \
    VEC_SWIZZLE3(w, x, x, x, y, z, w);                                                             \
    VEC_SWIZZLE3(w, x, y, x, y, z, w);                                                             \
    VEC_SWIZZLE3(w, x, z, x, y, z, w);                                                             \
    VEC_SWIZZLE3(w, x, w, x, y, z, w);                                                             \
    VEC_SWIZZLE3(w, y, x, x, y, z, w);                                                             \
    VEC_SWIZZLE3(w, y, y, x, y, z, w);                                                             \
    VEC_SWIZZLE3(w, y, z, x, y, z, w);                                                             \
    VEC_SWIZZLE3(w, y, w, x, y, z, w);                                                             \
    VEC_SWIZZLE3(w, z, x, x, y, z, w);                                                             \
    VEC_SWIZZLE3(w, z, y, x, y, z, w);                                                             \
    VEC_SWIZZLE3(w, z, z, x, y, z, w);                                                             \
    VEC_SWIZZLE3(w, z, w, x, y, z, w);                                                             \
    VEC_SWIZZLE3(w, w, x, x, y, z, w);                                                             \
    VEC_SWIZZLE3(w, w, y, x, y, z, w);                                                             \
    VEC_SWIZZLE3(w, w, z, x, y, z, w);                                                             \
    VEC_SWIZZLE3(w, w, w, x, y, z, w);                                                             \
    VEC_SWIZZLE4(x, x, x, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, x, x, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, x, x, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, x, x, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, x, y, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, x, y, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, x, y, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, x, y, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, x, z, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, x, z, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, x, z, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, x, z, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, x, w, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, x, w, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, x, w, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, x, w, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, y, x, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, y, x, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, y, x, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, y, x, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, y, y, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, y, y, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, y, y, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, y, y, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, y, z, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, y, z, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, y, z, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, y, z, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, y, w, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, y, w, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, y, w, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, y, w, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, z, x, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, z, x, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, z, x, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, z, x, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, z, y, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, z, y, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, z, y, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, z, y, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, z, z, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, z, z, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, z, z, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, z, z, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, z, w, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, z, w, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, z, w, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, z, w, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, w, x, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, w, x, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, w, x, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, w, x, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, w, y, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, w, y, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, w, y, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, w, y, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, w, z, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, w, z, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, w, z, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, w, z, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, w, w, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, w, w, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, w, w, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(x, w, w, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, x, x, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, x, x, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, x, x, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, x, x, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, x, y, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, x, y, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, x, y, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, x, y, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, x, z, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, x, z, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, x, z, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, x, z, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, x, w, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, x, w, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, x, w, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, x, w, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, y, x, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, y, x, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, y, x, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, y, x, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, y, y, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, y, y, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, y, y, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, y, y, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, y, z, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, y, z, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, y, z, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, y, z, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, y, w, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, y, w, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, y, w, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, y, w, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, z, x, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, z, x, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, z, x, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, z, x, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, z, y, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, z, y, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, z, y, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, z, y, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, z, z, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, z, z, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, z, z, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, z, z, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, z, w, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, z, w, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, z, w, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, z, w, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, w, x, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, w, x, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, w, x, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, w, x, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, w, y, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, w, y, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, w, y, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, w, y, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, w, z, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, w, z, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, w, z, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, w, z, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, w, w, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, w, w, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, w, w, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(y, w, w, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, x, x, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, x, x, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, x, x, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, x, x, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, x, y, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, x, y, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, x, y, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, x, y, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, x, z, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, x, z, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, x, z, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, x, z, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, x, w, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, x, w, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, x, w, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, x, w, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, y, x, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, y, x, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, y, x, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, y, x, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, y, y, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, y, y, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, y, y, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, y, y, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, y, z, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, y, z, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, y, z, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, y, z, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, y, w, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, y, w, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, y, w, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, y, w, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, z, x, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, z, x, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, z, x, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, z, x, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, z, y, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, z, y, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, z, y, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, z, y, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, z, z, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, z, z, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, z, z, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, z, z, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, z, w, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, z, w, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, z, w, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, z, w, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, w, x, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, w, x, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, w, x, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, w, x, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, w, y, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, w, y, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, w, y, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, w, y, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, w, z, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, w, z, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, w, z, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, w, z, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, w, w, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, w, w, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, w, w, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(z, w, w, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, x, x, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, x, x, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, x, x, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, x, x, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, x, y, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, x, y, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, x, y, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, x, y, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, x, z, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, x, z, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, x, z, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, x, z, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, x, w, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, x, w, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, x, w, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, x, w, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, y, x, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, y, x, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, y, x, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, y, x, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, y, y, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, y, y, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, y, y, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, y, y, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, y, z, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, y, z, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, y, z, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, y, z, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, y, w, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, y, w, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, y, w, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, y, w, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, z, x, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, z, x, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, z, x, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, z, x, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, z, y, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, z, y, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, z, y, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, z, y, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, z, z, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, z, z, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, z, z, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, z, z, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, z, w, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, z, w, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, z, w, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, z, w, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, w, x, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, w, x, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, w, x, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, w, x, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, w, y, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, w, y, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, w, y, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, w, y, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, w, z, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, w, z, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, w, z, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, w, z, w, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, w, w, x, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, w, w, y, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, w, w, z, x, y, z, w);                                                          \
    VEC_SWIZZLE4(w, w, w, w, x, y, z, w)
