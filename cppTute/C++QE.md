
************************************** C vs C++ **********************************************
```
• Write a C program that won’t compile in C++
• Name Mangling and extern “C” in C++
• How does “void *” differ in C and C++?
```
************************* The basic data types in C++   ************************************

```
    • Bool
    • Char
    • Int
    • Float
    • Double
    • Void
    • Wchar_t
    • size_t
    • integer promotion rule in c++
    • sizeof() is operator or function ? thoug it uses ( ) notation?
    • Definition of sizeof() macro
```
*******************************  The data type modifiers in C++  ************************************
   ```
    • signed 
    • unsigned 
    • long 
    • short 
    • Type difference of character literals in C and C++
```
**************************** OOPs  ******************************************************
```
    • Class and Object- Constructor and Destructor 
    • Distinguish between () and {} when creating objects.  
    • Sample obj;  VS  Sample* ptr =new Sample();  vs Sample* ptr = new Sample
    • Data Encapsulation - explain with Real time example
    • Data Abstraction,    
    • Inheritance 
    • Polymorphism (Overloading & Overriding) –Virtual function ( Compile & Run time Binding )
    • Abstract class , Interface
```
************** Data Abstraction vs  Data Encapsulation vs  Data Hiding ***********************
```
Data Abstraction 
    • Access Labels Enforce Abstraction
    • Benefits of Data Abstraction
    • Data Abstraction Example: 
    • Designing Strategy 

Data Encapsulation 
    • Data Encapsulation Example 
    • Designing Strategy

    • Data hiding
    • Method hiding
    • Method hiding vs method overrriding
```
******************************************  Basic Input/Output  ***********************
```
    • I/O Library Header Files 
    • The standard output stream (cout
    • The standard input stream (cin)
    • The standard error stream (cerr) 
    • The standard log stream (clog)
```
************************* Type of Storage Classes in C++  ******************************************
```
    • The auto Storage Class ,      why it called “auto” ?
    • The register Storage Class 
    • The static Storage Class 
    • The extern Storage Class 
    • The mutable Storage Class

    • Mutable/Immutable object  vs  persistent object
    • String is mutable or immutable object in c++  ?
    • String is mutable or immutable object in  java ?
```

****************************** Type Qualifiers in C++   *************************************
```
    • const
    • volatile
    • restrict
    • explicit
```
**************************************** Reference Variables  ****************************************
```
    • References in C++
    • Reference Initialization Rule
    • Size of References
    • “Reference-  A constant pointer “  Describe & justify the statement
    • Can Reference be NULL ?
    • Can references refer to invalid location in C++? Yes  how ?
    • Reference vs  Pointer 
    • When do we pass arguments by reference or pointer?
    • Call by Reference using C++ Reference variable 
                            Vs
 Call by Reference using C pointer  –  which better  choice & why ?

    • Swap( a, b)   content using reference variable 
```


Function Overloading:

```
    • Function Overloading in C++  [ change-  number of args |  types of args | order of args ]
    • Functions that can’t be overloaded in C++  

    • Function overloading and const keyword
        Int Func ( const int a )  vs  int Func ( int a )
        int Func ( int a ) const vs   int Func( int a )  

    • Function overloading and return type
    • Type difference of character literals in C and C++  - how it useful  in Function overloading
    • 
    • Does overloading work with Inheritance?
    • Can main() be overloaded in C++?  Without class & main() in a Class ?

    • Can we declare a variable name  int main=3;    
    • Func()= 10;  vs    n=fuc()   vs   fun(10) 
```

Default Argument: 
    • Default Arguments in C++
Inline Functions:
    • Inline () Functions

new and delete: 
    • Dynamic Memory Allocation for single Objects
    • Dynamic Memory Allocation for Arrays of objects
    • Dynamic Memory Allocation for C-String (array of  character with ‘\0’ )
    • Dynamic Memory Allocation for String  object (string class object)
    • The new and delete operator
    • malloc() vs new
    • Deep copy vs Shallow copy  illustrate with a program
    • delete() and free() in C++
    • How do free() get to know how much memory need to  De-allocate
    • New[]  and  delete []s
    • Dynamic Memory Understanding heap
    • Understanding stack , stack pointer , stack frame , Activation record 
    • Print Starting address of stack

    • Class and Object:
    • Introduction to Object Oriented Programming using C++
    • Structure vs class in C++
    • Local Classes in C++
    • Nested Classes in C++
    • 
    • Can a C++ class declaration have/contain an object of self type?
    • Can a C++ class declaration have/contain an pointer of self type?
    • Can a C++ class declaration have/contain an reference of self type?
    • 
    • Is it possible to create a empty class in C++  ?  what is its size ?
    • Why is the size of an empty class not zero in C++?
    • Un-named class and Un-named Object –advantages & disadvantages 

Static 
    • why  static member functions  used in C++
    • Static data members initialization in C++      class Test:: count=0;
    • Static member function in C++  class Test :: showStaticData();
    • What will happen if I use or update non-static variable in static function
    • When are static objects destroyed?

‘this’ Pointer:
    • ‘this’ pointer in C++
    • This pointer point to current class or current object ?
    • Type of ‘this’ pointer in C++
    • “delete this” in C++
Constructor and Destructor:
    • Constructors in C++
    • Copy Constructor in C++
    • Destructors in C++
    • Does compiler create default constructor when we write our own?
    • When should we write our own copy constructor?
    • When is copy constructor called?
    • Initialization of data members
    • When do we use Initializer List in C++?
    • Default Constructors
    • Private Destructor
    • virtual Destructors in C++
    • Copy elision in C++
    • C++ default constructor | Built-in types
    • When does compiler create a default constructor and copy constructor in C++?
    • Why copy constructor argument should be const in C++?
    • Advanced C++ | Virtual Constructor
    • Advanced C++ | Virtual Copy Constructor
    • C++ Internals | Default Constructors | Set 1
    • Is it possible to call constructor and destructor explicitly?
Inheritance: 

    • Inheritance, What all is inherited from parent class in C++?
    • What can not be inherited from parent class ?
    • Super class ,Sub class /Base & Derived class /parent & child class & their object memory sizes
    • Type of Inheritance (5 –Single, Multiple, Multilevel, Hierarchical, Hybrid inheritance  )
    • How to implement Multiple inheritance in C++
    • Diamond problem (problem with Hybrid inheritance and Multiple inheritance)
    • Solution of Diamond problem : Virtual Base class concept – how to implement?
    • Type of Inheritance( Private inheritance, protected inheritance, Public inheritance)
    • Order of Constructor calls under inheritance
    • Order of Destructor calls order under inheritance
    • Virtual Functions and Runtime Polymorphism in C++
    • What happens when more restrictive access is given to a derived class method in C++?
    • Object Slicing in C++
    • Hiding of all overloaded methods in base class
Friend:
    • Friend  function in C++   
    • Global friend  function 
    • friend  function- As a member function of another class
    • Friend class
    • Inheritance and friendship

Virtual Functions & Runtime Polymorphism
    • Polymorphism 
    • Static/Early binding &  Runtime/Late Binding
    • Virtual Function 
    • Pure Virtual Functions
    • Abstract Classes
    • Interfaces
    • Virtual Functions and Runtime Polymorphism in C++ 
    • Default arguments and virtual function
    • Virtual functions in derived classes
    • Can static functions be virtual in C++?
    • Virtual Destructor
    • Virtual Constructor – why there isa no virtual constructor by using virtual keyword
    • Virtual Copy Constructor
    • RTTI (Run-time type information) in C++
    • Can virtual functions be private in C++?
    • Inline virtual function
    • Pure Virtual Functions and Abstract Classes
    • Pure virtual destructor
Operator Overloading:
    • Operator Overloading in C++
    • Overload  binary +  operator  to add two Complex number  [ Z3(a, b) =  Z1(a, b) +Z2(a ,b) ]
    • Overload ++  (pre increment  ++i & post Increment i++ both ) operator 
    • Overload = operator


    • Copy constructor vs assignment operator in C++   
Student obj2=obj1    OR    Student Obj2(obj1)       // call copy Costructor

Student obj2;
obj2=obj1                            //Error  // Solution: need to overload = operator  

    • When should we write our own assignment operator in C++?

    • What are the operators that cannot be overloaded in C++?
    • Use of explicit keyword in C++
    • Conversion Operators
    • Is assignment operator inherited?
    • Default Assignment Operator and References
    • Pre-increment (or pre-decrement) in C++
    • Smart Pointers in C++
    • Overloading stream insertion (<<) and extraction (>>) operators
    • Overloading array index operator []
Exception Handling:
    • Exception Handling in C++
    • Throwing Exceptions 
    • Catching Exceptions
    • Multiple catch block
    • Catch(…)   catch block with ellipsis (can catch any type of exception)
    • Re-throwing Exceptions in Catch block
    • Throws(arg-list )  keyword 
    • C++ Standard Exceptions class
    • Define New Exceptions / User defined Costumed  Exceptions class
    • Throwing Exceptions object by calling its constructor
    • User defined Empty Exception class
    • Exception class with data members –how to extract info about Exception from Exception object
    • Stack Unwinding in C++
    • Catching base and derived classes as exceptions
    • Catch block and type conversion in C++
    • Exception handling and object destruction

                                                              C++ Files and Streams 
    • Stream class hierarchy 
    • Text file & binary file
    • Opening a File
    • Permission & modes
    • Closing a File 
    • Writing to a File
    • Reading from a File 
    • Read & Write Example
    • File Position Pointers
Templates:
    • Templates in C++
    • Function template 
    • Class template
    • Templates and Static variables in C++
    • Templates and Default Arguments
    • Template Meta programming in C++
    • Template Specialization in C++

Standard Template Library (STL):
Algorithms:
    • Introduction to STL
    • Sorting
    • Searching

Containers:
    • Vector
    • List
    • Dequeue
    • Queue
    • Priority Queue
    • Stack
    • Pair
    • Set, Multiset
    • Map ,Multimap
Misc:
    • 
    • Casting operators in C++ | Set 1 (const_cast)
    • Simulating final class in C++
    • Const member functions in C++ 
    • asm ()  Functions
    • signal() function
    •  raise() function
    • rand() and srand(seed) function

                                                 Namespaces
    • Defining a Namespace
    • The using directive 
    • Discontiguous Namespaces
    • Nested Namespaces

                                          Smart pointer

    • C pointer , near , far , huge pointer
    • Prefer   nullptr to 0 and NULL. ?
    • Smart Pointers. .
    • Use std::unique_ptr for exclusive-ownership resource management
    • Use std::shared_ptr for shared-ownership resource management
    • Use std::weak_ptr for std::shared_ptr-like pointers that can dangle.
    • Prefer std::make_unique and std::make_shared to direct use of new.

What  is Lambda Expressions
What is Rvalue References, Move Semantics, and Perfect Forwarding

C++ vs Java:
    • Comparison of Inheritance in C++ and Java,  Comparison of static keyword in C++ and Java
    • How does default virtual behavior differ in C++ and Java ?
    • Comparison of Exception Handling in C++ and Java
Puzzles: 
    • Can we call an undeclared function in C++?
    • Can we access global variable if there is a local variable with same name?
    • Can we use function on left side of an expression in C and C++?
    • Can namespaces be nested in C++?
    • Can we access private data members of a class without using a member or a friend function?
    • How to make a C++ class whose objects can only be dynamically allocated?
    • How to print “GeeksforGeeks” with empty main() in C++?
    • Print 1 to 100 in C++, without loop and recursion
    • How to restrict dynamic allocation of objects in C++?
