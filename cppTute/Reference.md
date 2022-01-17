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

*  A reference must be initialized always during its declaration. 
*  A reference variable is stored in stack like other auto variables/pointers

* Unlike Pointer ,  A Reference does not need to be dereferencing explicitely during accessing it . 
  It get dereferenced automatically, No need Astersik **`*`** operator

* A sngle variable can have multiple valid references
 
 ```
    int i = 5;
    
    int& x = i;   //OK    x ----> i  
    int& y = i;   //OK    y ----> i
    int& z = i;   //OK    z ----> i
```
* Pointer --- To---> Reference  //OK VALID
* Reference ---To---> Pointer  //OK VALID




## Wrong Declaration  & Corrections                                              

CASE [1]
```
int& i ;               //ERROR: No variable to refer , It must be Initialized                      
int& i = j;            // CORRECTED
```
CASE [2]
```
int& i = 5;            //ERROR : No Address to Refer, As '5' is a constant
const int& i =5        //CORRECTED
```
CASE [3]
```
int& i = j + k ;       //ERROR : Temporary address of expression (j+k) is not available to userspace 
const int& = j + k;    //CORRECTED
```



