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

cout<< getMax(100 , 20);                 // 100 
cout<< getMax('A', 'Z');                 // Z
cout<< getMax(10.5 , 5.11);              // 10.5

string s1("ABC") ;
string s2("XYZ");
cout<< getMax(s1 , s2);                 // XYZ

```  
### NOTE:  
A template is a blueprint or formula for creating a generic class or a function. 
The library containers like iterators and algorithms are examples of generic programming and have been developed using template concept.
  
  Example :                              
  std::sort() function can sort all types of data , It work on any data type - int , char , strings etc or even UDT (User defined Data type)

There is a single definition of each container, such as vector, 
but we can define many different kinds of vectors for example, 

```
vector <int> myVec;
vector <string> myVec; 
```
  
##  Overloading Function Template : 
Overloading with Templated mix matched types just works :)  

```
template <typename T1 , typename T2>
auto getMax(const T1& x , const T2& y)              ////C++14 auto return type
{
      return (x>y)? x : y;
}
```
```
cout<< getMax(10.5,  'A'); // 65  =ASCII(A) 
cout<< getMax(10.6 , 20);  //20
```

## Can we use 'auto' in function parameter declaration, in C++ ? 
## auto as parameter are not (yet) allowed for regular functions but Works with warning from C++17.  Pass:  g++ -std=c++17 

```
auto getMax(const auto x , const auto y)
{
      return (x>y)? x : y;
}

```
```
//Throws Warning :
template1.cpp:7:19: warning: use of ‘auto’ in parameter declaration only available with ‘-fconcepts’

//But still compile and run works on g++ v9.3.0 
g++ template1.cpp  -o temp
./temp works
```
* To get around warning : You might like to use regular template, something like above 



# Class Template C++

class templates are useful when a class defines something that is independent of the data type.             
Can be useful for creating container classes like List, BinaryTree, Stack, Queue, Array, vector etc. 

```
list<int> mylist;
list<string> contactList;
list<books> bookList;
list<dishes> menuCard;
```  
Examples:  

```
template <class T>

 class Number {
 
  private:
    T num;                        // Variable of type T

   public:
    Number(T value) : num(value) {}         // constructor

    T getNum() {
        return num;
    }
};
```

Main calls

```  
Number<int> numberInt(7);
cout<< numberInt.getNum();             // 7
  
Number<double> numberDouble(7.7);
cout << numberDouble.getNum();         //7.7
```  



# Advantages of Using Templates in C++
* Templates are type-safe.
* They are generally considered as an improvement over macros for these purposes.
* Templates avoid some common errors found in code that makes heavy use of function-like macros.
* Both templates and macros are expanded at compile time.
* They are a good way of making generalisations for APIs.

# Disadvantages of Using Templates in C++
* Many compilers do not support nesting of templates.
* When templates are used, all codes exposed.
* Some compilers have poor support of templates.
* Approx all compilers produce unhelpful, confusing error messages when errors are detected in the template code.
* It can make it challenging to develop the template.

# Overloading of C++ template
* A template function is called that could be created with an exact match.
* Call an ordinary function that has an exact match.
