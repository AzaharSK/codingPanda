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



# General Compiler and Linker Flags

REF: https://caiorss.github.io/C-Cpp-Notes/compiler-flags-options.html
https://gist.github.com/g-berthiaume/74f0485fbba5cc3249eee458c1d0d386
https://www.codeproject.com/Articles/1221348/Step-by-Step-Performance-Optimization-with-Intel-C
