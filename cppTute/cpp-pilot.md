# Differene between C and C++

## C
Procedural programming langauge ,                                                                                                  
Emphasis on PROCEDURE or STEPS and SEQUENCE to solve large problem.                                                           
Functions and Sequence of calls are  building block of C

```
task A
   do subTaskA1()
   do subTaskA2()
   do subTaskA3()
task B
  do subTaskB1()
  do subTaskB2()
  do subTaskB3()
```

## C++ is a Hybrid programming language 
PROCEDURE + OOP (Object Oriented Programming ) language                                                         
Emphasis on OBJECT model rather than Procedure/STEPS                                                                  
CLASSES (BluePrint) and OBJECTS (Instances) are fundamental building blocks in C++                                            
                                                                                                                              
With the help of the Classes and Objects , It is very easy to relate external world and solving the problem   
```
Eg- Game: Player Batsman Boller score Enemy etc

Easily Define Game rule

Create funcationalites of Player 
inherit in Batsman and add more Specialization functionalities  hit() run() score() etc 
```

# C++ is more secure than C 
  In C , data is by default: public ==> Not secured ==> Any external Function can excess/modify/destroy data                           
  
  While  C++ has Data hiding capabilites through access specifier ,                                       
  We can provide controlled access to data by using access specifier 
  (private , protected , public section)
  
  ```
  private:
    Programmer keep data private to class ; only accessible within class scope. 
    In this way Private data can be hidden & can not be access by external functions
 
 protected:
    Base class as well as its deriver classes can access the member data
 
 public:
    Data member exposed to outside world, From anywhere we can access the data
 
 ```
    
    
# C++ also provide OOP feature over C

  ### constructor
  Constructors -is class special members functions Helps to initialize the member variables .
  
  ### Destructors
  Destructors is class special members functions in a class that delete an object.                                            
  Do other cleanup operation or close calls/relase resources/memory for a class object
  
  ### Inheritance :
  we can inherit the General characteristic , features and functionalites of "Base calass" or "Parent class" into "Derived class" /"Child class" .  So we can re-   use the code , add more specilized feaures and functionlites in Derived class ,In addition to those inherited general charcteristics 
  
  ### Polymorphism :
  Same feaures or functionalites could be reimplemted/redefined in many form in the subsequent "Derived classes"
  
  ### Encapsulation
  We Encapsulate core data members and core functionlites which operated on those data together inside the class like Tablet/Capsule 
  
  ### Abstraction
  We Hide the implementation complexity od system from the USER.
  
  ### Function overloading
  We overload the function to work on differnt data types and orders 
  
  ### Operator Overloading 
  We overload operator to work on UDD (User defined datatype ) as well
  
  ### Default Arguments
  C++ allows programmer to assign default values to the function parameters during function prototype declaration
  
  
  
# C++ support more unexpected error handling (Excpetion) 

   ### C support error handling using error codes

   ```
   #include <errno.h>
   printf("%s \n", strerror(errno));
   
   //5 EIO I/O error
   //11  EAGAIN Try again
   ```
   ###  C++ support Run time excpetion handling 
 
 ```
      try -catch-throw
 ```
 ```
      #include <excpetion>
      std::exception
      
logic_error
   invalid_argument
   domain_error
   length_error
   out_of_range
   future_error(C++11)
   bad_optional_access(C++17)
runtime_error
  range_error
  overflow_error
  underflow_error
  regex_error(C++11)
system_error(C++11)
      ios_base::failure(C++11)
      filesystem::filesystem_error(C++17)
tx_exception(TM TS)
nonexistent_local_time(C++20)
ambiguous_local_time(C++20)
format_error(C++20)
bad_typeid
bad_cast
bad_any_cast(C++17)
bad_weak_ptr(C++11)
bad_function_call(C++11)
bad_alloc
bad_array_new_length(C++11)
bad_exception
ios_base::failure(until C++11)
bad_variant_access(C++17)

```


## C   => Follows => TOP_DOWN approches

```
1.First we will make a high level design of a problem statement.

2.After that we will write the main function.

3.From the main function we will call the sub functions.

Generally, the large program is divided into small small sub functions(each function will do a specific task) which improves the modularity of a program.

Using that we can easily debug the program.

4.Later we will implement(code) all the sub functions based on requirements. Thats why c is called the top down approach.
```

## C++ => FOllows => BUTTOM_UP approches

  
  
