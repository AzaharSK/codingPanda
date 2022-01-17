# Compiler flags, and performance optimization, tuning techniques 

## Linux GCC CMAKE CLANG

### Gains from tuning categories 
Tuning Category Typical Range of Gain

* Source range                        **`25-100%`**
* Compiler Flags                      **`5-20%`**
* Use of libraries                    **`25-200%`**
* Assembly coding / tweaking          **`5-20%`**
* Manual prefetching                  **`5-30%`**
* TLB thrashing/cache                 **`20-100%`**
* Using vis.inlines                   **`100-200%`**



A non exhaustive list of gcc compiler options.

```
$ gcc myprog.c -o myprog -Wall -Wextra -pedantic -std=c11 [...]
```

## Optimization: 

| Options | Details |
|---- |---- |
| `-O0` | explicitly turns off all optimizations. |
| `-O1` | enables a few optimizations, but isn't very useful overall.|
| `-O2` | is the most commonly used optimization flag. |
| `-O3` | enable even more optimizations, but can actually harm the runtime of your code by making it take up more space (so it doesn't fit into cache anymore). |
| `-Os` | optimizes for small binaries. |

## Warnings/errors: 

| Options | Details |
|---- |---- |
| `-Wall` |  enables some warnings. |
| `-Wextra` |  enables more warnings. |
| `-pedantic` |  will try to enforce standards compliance. |
| `-Werror` |  turns warnings into errors. |

> NOTES: You can turn individual warnings on/off with -Wthis-warning or -Wno-this-warning.

## Debugging:

| Options | Details |
|---- |---- |
| `-C` | Produce only the compiled code |
| `-g` | adds debug symbols. |
| `-fsanitize=address` | Enable AddressSanitizer, a fast memory error detector.  |
| `-fsanitize=pointer-compare` | Ensure that their's no comparasson between two pointers from different objects using the relational operators. The option must be combined with `-fsanitize=address` | 
| `-march=native` `-mtune=native` | enables optimizations which work specifically on your cpu and might not on others. |
| `-m32` | makes a 32-bit object rather than a 64-bit one (assuming your processor is 64-bit) |
| `-fPIC` | makes position independent code. (usefull to make a shared library) |
| `-fPIE` | makes position independent executable (usefull to make security-critical code) |
| `-S` |  generate assembly code instead of object files. Useful for seeing what the compiler is doing, and gaining insights into how the code could be optimized. |
| `-E` | produce only the preprocessor output |

## Miscellaneous:

| Options | Details |
|---- |---- |
| `-Idirectory` | look for header files in this location |
| `-Dfoo`[=bar] | compile time macro: same as saying `#define foo [bar]` in your source file |
| `-std`=[`c89`, `c99`, `c11`, `c17`, `gnu-x`] | enforces compliance to a given version of c. |
| `-Lwhatever` | adds whatever to the library search dir (so if you do gcc -Lwhatever -lbla, you might link to whatever/libbla.so). |


Credits
Thanks to reddit users u/5tarrealm5, u/Elronnd, u/maep and u/capilot for inspiring this notes.


# General Compiler and Linker Flags

REF: https://caiorss.github.io/C-Cpp-Notes/compiler-flags-options.html
https://gist.github.com/g-berthiaume/74f0485fbba5cc3249eee458c1d0d386
https://www.codeproject.com/Articles/1221348/Step-by-Step-Performance-Optimization-with-Intel-C
