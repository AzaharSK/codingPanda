# Compiler flags, and performance optimization, tuning techniques 

## Linux GCC CMAKE 

### Gains from tuning categories 
Tuning Category Typical Range of Gain

* Source range                        **`25-100%`**
* Compiler Flags                      **`5-20%`**
* Use of libraries                    **`25-200%`**
* Assembly coding / tweaking          **`5-20%`**
* Manual prefetching                  **`5-30%`**
* TLB thrashing/cache                 **`20-100%`**
* Using vis.inlines                   **`100-200%`**
