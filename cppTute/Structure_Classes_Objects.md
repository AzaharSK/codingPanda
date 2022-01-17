# What are POD types in C++?

POD is an acronym in C++ that means plain old data. 
It is a class/struct that ONLY has member variables and no methods, constructors, destructors, virtual functions, etc. For example,

```
// POD
struct MyStruct {
    int key;
    string data;
};
```

#  Structure vs Classes 

* POD Structure
```
[1] Initially From C , POD structure was used for User-Defined-Types , 
    to bundle different types of data together in one Instance.
[2] Default access : Public
[3] No Data Hinding support in POD structure
[4] Structure data members CAN NOT be inherited 
[5] Structure CAN NOT be Abstruct type
[6] Structure Instance are value-type
```
* C++ classes

```
[1] Class data member and methods are wraaped together in one blueprint and instance of it.
[2] Default Access: Private
   But we can provide controlled access vai other access spicer Protected , Public
[3] Data hiding and Encapsulation, Several layer Abstractions etc can be implemented 
[4] Clas member and feature functionalites can be inherited into Dervied class/Child classes
[5] Class can be Abstract
```

# Nested Classes in C++

A nested class is a class that is declared in another class.    
The nested class is also a member variable of the enclosing class and has the same access rights as the other members.    
However, the member functions of the enclosing class have no special access to the members of a nested class.

```
class A 
{
   public:
      class B 
      {
          private:
              int num;
          public:
             void getdata(int n)  { num = n;  }
             void putdata() { cout<<num; }
          
    };   //Class B
   
  
   
};

```
Calls in Main

```
A :: B ob;
ob.getdata(9);
ob.putdata();

```

# Local Classes in C++

A class declared inside a function becomes local to that function and is called Local Class in C++.

* A local class name can only be used locally i.e., inside the function and not outside it.
* The methods of a local class must be defined inside it only.
* A local class can have static functions but, not static data members.

```
void fun()
{
    class Test // local to fun
    {
    public:
        static void method()
        {
            cout << "Local Class method() called";
        }
    };
  
    Test::method();
}
  
int main()
{
    fun();     // Local Class method() called
    return 0;
}

```

# Can a C++ class have an object of self type?

A class declaration can contain static object of self type.      
It can also have pointer to self type.             
But it cannot have a non-static object of self type

* CASE [1]  static object of self type
```
class Test {
    
    static Test self;  // works fine
  
  /* other stuff in class*/ 
  
};

Test t;
```
* CASE [2] Pointer to self type

```
class Test {
  Test * self; //works fine
  
  /* other stuff in class*/ 
  
};
Test t
```
* CASE [3] non-static object of self type

```
class Test {
  Test self; // Error
  
  /* other stuff in class*/ 
  
};

Test t // ERROR
```
  
 ### NOTE: 
If a non-static object is member then declaration of class is incomplete and compiler has no way to find out size of the objects of the class.
Static variables do not contribute to the size of objects. So no problem in calculating size with static variables of self type.
For a compiler, all pointers have a fixed size irrespective of the data type they are pointing to, so no problem with this also.


# Why is the Size of an Empty Class Not Zero in C++?

In C++, the Size of an empty structure/class =>  1 byte  
As to call a function at least empty structure/class should have some size (minimum 1 byte is required )  
i.e. one byte to make them distinguishable.

```
class Empty_class {

};
 
cout << sizeof(Empty_class);  // 1-Byte
```         


