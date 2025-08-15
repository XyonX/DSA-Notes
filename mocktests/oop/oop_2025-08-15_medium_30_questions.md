# OOP Mock Test - Medium Difficulty

## Question 1

What is encapsulation in OOP?

### Options

A) Hiding the internal details of an object
B) Allowing objects to inherit properties
C) Using multiple forms of the same method
D) Combining data and methods into a single unit

### Your Answer:

A

## Question 2

Which of the following is NOT a pillar of OOP?

### Options

A) Encapsulation
B) Polymorphism
C) Abstraction
D) Compilation

### Your Answer:

D

## Question 3

What does inheritance allow you to do?

### Options

A) Create multiple instances of a class
B) Hide implementation details
C) Create a new class based on an existing class
D) Define multiple methods with the same name

### Your Answer:

C

## Question 4

What is polymorphism?

### Options

A) The ability to take multiple forms
B) The ability to hide data
C) The ability to inherit properties
D) The ability to combine data and methods
A

### Your Answer:

## Question 5

Which keyword is used to inherit a class in C++?

### Options

A) extends
B) inherits
C) :
D) ::

### Your Answer:

:

## Question 6

What is the purpose of a constructor?

### Options

A) To destroy an object
B) To initialize an object
C) To copy an object
D) To compare two objects

### Your Answer:

B

## Question 7

What is method overriding?

### Options

A) Defining multiple methods with the same name in a class
B) Redefining a method in a subclass that is already defined in its parent class
C) Calling a method from another method
D) Creating a method that accepts variable arguments

### Your Answer:

B

## Question 8

What is an abstract class?

### Options

A) A class that cannot be instantiated
B) A class that contains only static methods
C) A class that implements an interface
D) A class that has private members only

### Your Answer:

A

## Question 9

What is the difference between an interface and an abstract class?

### Options

A) An interface can have implementation, but an abstract class cannot
B) An abstract class can have implementation, but an interface cannot (in most languages)
C) An interface can be instantiated, but an abstract class cannot
D) There is no difference

### Your Answer:

B

## Question 10

What is the 'this' pointer in C++?

### Options

A) A pointer to the base class
B) A pointer to the current object
C) A pointer to a function
D) A pointer to a static member

### Your Answer:

B

## Question 11

What is function overloading?

### Options

A) Having multiple functions with the same name but different parameters
B) Having multiple functions with different names but same parameters
C) Having a function that can be called in multiple ways
D) Having a function that works with multiple data types

### Your Answer:

A

## Question 12

Which access modifier makes members accessible only within the same class?

### Options

A) public
B) protected
C) private
D) default

### Your Answer:

B

## Question 13

What is a virtual function?

### Options

A) A function that cannot be overridden
B) A function that is declared but not defined
C) A function that can be overridden in a derived class
D) A function that is static

### Your Answer:

C

## Question 14

What is the purpose of a destructor?

### Options

A) To initialize an object
B) To destroy an object
C) To copy an object
D) To compare two objects

### Your Answer:

B(BUT I SUPOSE DESTROY AN OBJECT ALSO NOT CORECT , THE DELETE KEYWORD DESTROY OBJECT DESCRUCTOR IS A FUCNTION THAT IS USED TO CLEANUP ANDN IT GETS CALL WHEN A OBJECT IS GETTING DESTROYED)

## Question 15

What is a pure virtual function?

### Options

A) A function with no implementation
B) A function that must be overridden in a derived class
C) A function that is declared with the keyword 'pure'
D) Both A and B

### Your Answer:

B(A ALSO A POSIBLE ANSWER BUT BOTH COMBINES MAKES SENSE IF I UNDERSTANDF CORRECTLY)

## Question 16

What is the output of the following code?

```cpp
class Base {
public:
    virtual void show() { cout << "Base"; }
};
class Derived : public Base {
public:
    void show() { cout << "Derived"; }
};
int main() {
    Base* b = new Derived();
    b->show();
    return 0;
}
```

### Options

A) Base
B) Derived
C) BaseDerived
D) Compilation error

### Your Answer:

A(BECASE IT DIDNT USED OVERIDE KEYWROD SO IRT WIL STIL CAL THE BASE IMPLEMENTAION)

## Question 17

What is multiple inheritance?

### Options

A) A class inheriting from multiple classes
B) A class having multiple constructors
C) A class having multiple destructors
D) A class implementing multiple interfaces

### Your Answer:

A

## Question 18

What is the diamond problem in inheritance?

### Options

A) A problem with multiple inheritance where a class inherits from two classes that have a common base class
B) A problem with single inheritance
C) A problem with method overriding
D) A problem with encapsulation

### Your Answer:

A

## Question 19

What is a friend function?

### Options

A) A function that is a member of a class
B) A function that has access to private members of a class
C) A function that is declared inside a class but defined outside
D) A function that can be called without an object

### Your Answer:

B

## Question 20

What is operator overloading?

### Options

A) Defining multiple operators in a class
B) Giving special meanings to operators for user-defined types
C) Using operators with different data types
D) Creating new operators

### Your Answer:

B

## Question 21

What is a copy constructor?

### Options

A) A constructor that creates a copy of an object
B) A constructor that initializes an object with another object of the same type
C) A constructor that copies the address of an object
D) A constructor that is called when an object is copied

### Your Answer:

A(B ALSO TRUE BUT IF IT COPIES I SUPPOSE)

## Question 22

What is the difference between a shallow copy and a deep copy?

### Options

A) Shallow copy copies the reference, deep copy copies the value
B) Shallow copy copies the value, deep copy copies the reference
C) There is no difference
D) Shallow copy is faster than deep copy

### Your Answer:

A

## Question 23

What is a static member function?

### Options

A) A function that belongs to an object
B) A function that belongs to a class and can access static members only
C) A function that is declared with the keyword 'static'
D) Both B and C

### Your Answer:

B

## Question 24

What is a const member function?

### Options

A) A function that cannot be called on const objects
B) A function that cannot modify the object's state
C) A function that is declared with the keyword 'const'
D) Both B and C

### Your Answer:

B

## Question 25

What is the purpose of the 'mutable' keyword?

### Options

A) To make a member variable constant
B) To make a member variable modifiable even in const objects
C) To make a member variable static
D) To make a member variable private

### Your Answer:

B(I GUESS I AM NOT SURE NEVER USED EXPLAINATION IS APRICIATED)

## Question 26

What is RTTI?

### Options

A) Run-Time Type Identification
B) Real-Time Type Information
C) Run-Time Type Information
D) Real-Time Type Identification

### Your Answer:

C

## Question 27

What is the difference between early binding and late binding?

### Options

A) Early binding is resolved at compile time, late binding at runtime
B) Early binding is resolved at runtime, late binding at compile time
C) There is no difference
D) Early binding is faster than late binding

### Your Answer:

A(I GUES )

## Question 28

What is a namespace?

### Options

A) A way to group related classes and functions
B) A way to define a new data type
C) A way to create a new scope
D) A way to declare variables

### Your Answer:

A

## Question 29

What is the purpose of the 'using' directive?

### Options

A) To create an alias for a namespace
B) To import all names from a namespace
C) To define a new namespace
D) Both A and B

### Your Answer:

D(I GUESS)

## Question 30

What is the output of the following code?

```cpp
#include <iostream>
using namespace std;
class Test {
    static int count;
public:
    Test() { count++; }
    static int getCount() { return count; }
};
int Test::count = 0;
int main() {
    Test t1, t2;
    cout << Test::getCount();
    return 0;
}
```

### Options

A) 0
B) 1
C) 2
D) Compilation error

### Your Answer:

2 (I SUPPOSE AS IT STARS WITH 0 WITH THE OPENIGN OF PROGRAME THEN CREATING T1 AND T2 INCREMNTS THE SMAE COUNT AS ITS STATIC )
