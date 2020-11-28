# swizzle
swizzle is a C++ standard-compliant implementation of glsl vector swizzling.

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
`vecN<T>` is the template for a vector of `N` elements of type `T`, `dvecN`, `fvecN`, `ivecN` are aliases to its specialization.  
All swizzles have unspecified types, but is guaranteed to be unique to swizzle.

## Installation
swizzle is header only, just `#include"swizzle.hpp"`. Requires C++17.

## Acknowledgements
[eerorika](https://stackoverflow.com/a/65027725/4832499) for the union/struct hack.
