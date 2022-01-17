# Reference in C++

A Reference is an Alias Label for an existing (already defined/Initialized) variable.

```
int i     = 15;                 // i -----> 15
int& ref  = i;                  // j -----> i

cout<< i     //15
cout<< ref   // 15
```


### Variable_Name: 
As a Label attached to the memory location in RAM

### Reference    : 
As just another Alias Label (Alternative name) to that SAME memory Location.      
So that we we can access the content of that variable/memory location  
by either its originally declared variable name or by refrence pointing to it 

## PROPERTIES :

* A Reference is an **` Alias Label`** for an **`existing variable`** (already defined/Initialized).
* A Reference is like a **`Constant Pointer`**  , Once It made to refer an existing Object/variable,                  
  It can not be changed to refer to another Object/variable , This way it become more safer to work with it than pointer
  
* Unlike Pointer ,  A Reference does not need to be dereferencing explicitely during accessing it . 
  It get dereferenced automatically   
