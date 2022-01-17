# Template in C++

Templates are way to write generic program in C++  
Which means - Writing code/algorithms in a way that works on any premitive or user defined types (i.e- independent of any particular data-type)

## POINTS TO BE REMEMBERED:
We can use templates to define functions as well as classes,                                                 
  ```
  [1] Function Template                                                     
  [2] Class Template
  ```
Moder C++ Compiler automatically deduce the data type for us.


### Function Template

```
template <typename T>

T getMax(const T& x , const T& y)
{

        return (x>y)? x :y ;
}


int main()
{
        cout<<getMax(100 , 20);                 // 100 
        cout<<getMax('A', 'Z');                 // Z
        cout<<getMax(10.5 , 5.11);              // 10.5

        string s1("ABC") ;
        string s2("XYZ");
        cout<<getMax(s1 , s2);                 // XYZ
return 0;
  
}
```  
  
  A template is a blueprint or formula for creating a generic class or a function. 
  The library containers like iterators and algorithms are examples of generic programming and have been developed using template concept.
  
  
