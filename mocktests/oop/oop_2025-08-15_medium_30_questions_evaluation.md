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

### Correct Answer:
D

### Explanation:
Encapsulation is the bundling of data and methods that operate on that data within a single unit (class). While option A (hiding internal details) is related to encapsulation through access modifiers, the core definition is about combining data and methods.

## Question 2
Which of the following is NOT a pillar of OOP?

### Options
A) Encapsulation
B) Polymorphism
C) Abstraction
D) Compilation

### Your Answer:
D

### Correct Answer:
D

### Explanation:
The four pillars of OOP are encapsulation, inheritance, polymorphism, and abstraction. Compilation is not one of them.

## Question 3
What does inheritance allow you to do?

### Options
A) Create multiple instances of a class
B) Hide implementation details
C) Create a new class based on an existing class
D) Define multiple methods with the same name

### Your Answer:
C

### Correct Answer:
C

### Explanation:
Inheritance allows you to create a new class (derived class) based on an existing class (base class), inheriting its properties and methods.

## Question 4
What is polymorphism?

### Options
A) The ability to take multiple forms
B) The ability to hide data
C) The ability to inherit properties
D) The ability to combine data and methods

### Your Answer:
A

### Correct Answer:
A

### Explanation:
Polymorphism means "many forms" and allows objects of different types to be treated as instances of the same type through a common interface.

## Question 5
Which keyword is used to inherit a class in C++?

### Options
A) extends
B) inherits
C) :
D) ::

### Your Answer:
:

### Correct Answer:
C

### Explanation:
In C++, the colon (:) is used to specify inheritance, e.g., `class Derived : public Base`.

## Question 6
What is the purpose of a constructor?

### Options
A) To destroy an object
B) To initialize an object
C) To copy an object
D) To compare two objects

### Your Answer:
B

### Correct Answer:
B

### Explanation:
A constructor is a special method that is automatically called when an object is created, used to initialize the object's state.

## Question 7
What is method overriding?

### Options
A) Defining multiple methods with the same name in a class
B) Redefining a method in a subclass that is already defined in its parent class
C) Calling a method from another method
D) Creating a method that accepts variable arguments

### Your Answer:
B

### Correct Answer:
B

### Explanation:
Method overriding occurs when a subclass provides a specific implementation of a method that is already defined in its parent class.

## Question 8
What is an abstract class?

### Options
A) A class that cannot be instantiated
B) A class that contains only static methods
C) A class that implements an interface
D) A class that has private members only

### Your Answer:
A

### Correct Answer:
A

### Explanation:
An abstract class is a class that cannot be instantiated directly and is meant to be subclassed. It may contain abstract methods that must be implemented by subclasses.

## Question 9
What is the difference between an interface and an abstract class?

### Options
A) An interface can have implementation, but an abstract class cannot
B) An abstract class can have implementation, but an interface cannot (in most languages)
C) An interface can be instantiated, but an abstract class cannot
D) There is no difference

### Your Answer:
B

### Correct Answer:
B

### Explanation:
An abstract class can have both abstract and concrete methods, while an interface typically only defines method signatures without implementation (in most languages).

## Question 10
What is the 'this' pointer in C++?

### Options
A) A pointer to the base class
B) A pointer to the current object
C) A pointer to a function
D) A pointer to a static member

### Your Answer:
B

### Correct Answer:
B

### Explanation:
The 'this' pointer in C++ is a pointer that points to the current object instance within member functions.

## Question 11
What is function overloading?

### Options
A) Having multiple functions with the same name but different parameters
B) Having multiple functions with different names but same parameters
C) Having a function that can be called in multiple ways
D) Having a function that works with multiple data types

### Your Answer:
A

### Correct Answer:
A

### Explanation:
Function overloading allows multiple functions with the same name but different parameter lists (number, type, or order of parameters) in the same scope.

## Question 12
Which access modifier makes members accessible only within the same class?

### Options
A) public
B) protected
C) private
D) default

### Your Answer:
B

### Correct Answer:
C

### Explanation:
The 'private' access modifier restricts access to members only within the same class. 'protected' allows access within the class and its derived classes.

## Question 13
What is a virtual function?

### Options
A) A function that cannot be overridden
B) A function that is declared but not defined
C) A function that can be overridden in a derived class
D) A function that is static

### Your Answer:
C

### Correct Answer:
C

### Explanation:
A virtual function is a member function in a base class that can be redefined in a derived class, enabling polymorphism.

## Question 14
What is the purpose of a destructor?

### Options
A) To initialize an object
B) To destroy an object
C) To copy an object
D) To compare two objects

### Your Answer:
B(BUT I SUPPOSE DESTROY AN OBJECT ALSO NOT CORECT , THE DELETE KEYWORD DESTROY OBJECT DESCRUCTOR IS A FUCNTION THAT IS USED TO CLEANUP ANDN IT GETS CALL WHEN A OBJECT IS GETTING DESTROYED)

### Correct Answer:
B

### Explanation:
A destructor is a special method that is automatically called when an object is destroyed. It's used for cleanup activities like releasing resources. While 'delete' is used to deallocate memory, the destructor handles the cleanup process.

## Question 15
What is a pure virtual function?

### Options
A) A function with no implementation
B) A function that must be overridden in a derived class
C) A function that is declared with the keyword 'pure'
D) Both A and B

### Your Answer:
B(A ALSO A POSIBLE ANSWER BUT BOTH COMBINES MAKES SENSE IF I UNDERSTANDF CORRECTLY)

### Correct Answer:
D

### Explanation:
A pure virtual function is declared with '= 0' in the base class and has no implementation there. It must be overridden in derived classes, making both A and B correct.

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

### Correct Answer:
B

### Explanation:
Even without the 'override' keyword, since the method in the base class is declared as 'virtual', the derived class's implementation will be called due to dynamic polymorphism. The actual object type (Derived) determines which method is called.

## Question 17
What is multiple inheritance?

### Options
A) A class inheriting from multiple classes
B) A class having multiple constructors
C) A class having multiple destructors
D) A class implementing multiple interfaces

### Your Answer:
A

### Correct Answer:
A

### Explanation:
Multiple inheritance occurs when a class inherits from more than one base class.

## Question 18
What is the diamond problem in inheritance?

### Options
A) A problem with multiple inheritance where a class inherits from two classes that have a common base class
B) A problem with single inheritance
C) A problem with method overriding
D) A problem with encapsulation

### Your Answer:
A

### Correct Answer:
A

### Explanation:
The diamond problem occurs in multiple inheritance when a class inherits from two classes that both inherit from a common base class, leading to ambiguity.

## Question 19
What is a friend function?

### Options
A) A function that is a member of a class
B) A function that has access to private members of a class
C) A function that is declared inside a class but defined outside
D) A function that can be called without an object

### Your Answer:
B

### Correct Answer:
B

### Explanation:
A friend function is a non-member function that has access to the private and protected members of a class.

## Question 20
What is operator overloading?

### Options
A) Defining multiple operators in a class
B) Giving special meanings to operators for user-defined types
C) Using operators with different data types
D) Creating new operators

### Your Answer:
B

### Correct Answer:
B

### Explanation:
Operator overloading allows existing operators to have special meanings when applied to user-defined types (classes or structs).

## Question 21
What is a copy constructor?

### Options
A) A constructor that creates a copy of an object
B) A constructor that initializes an object with another object of the same type
C) A constructor that copies the address of an object
D) A constructor that is called when an object is copied

### Your Answer:
A(B ALSO TRUE BUT IF IT COPIES I SUPPOSE)

### Correct Answer:
B

### Explanation:
A copy constructor is a special constructor that initializes an object using another object of the same class. While A is conceptually correct, B is more precise.

## Question 22
What is the difference between a shallow copy and a deep copy?

### Options
A) Shallow copy copies the reference, deep copy copies the value
B) Shallow copy copies the value, deep copy copies the reference
C) There is no difference
D) Shallow copy is faster than deep copy

### Your Answer:
A

### Correct Answer:
A

### Explanation:
In a shallow copy, pointer members are copied as references to the same memory location. In a deep copy, new memory is allocated, and the content is copied.

## Question 23
What is a static member function?

### Options
A) A function that belongs to an object
B) A function that belongs to a class and can access static members only
C) A function that is declared with the keyword 'static'
D) Both B and C

### Your Answer:
B

### Correct Answer:
D

### Explanation:
A static member function belongs to the class rather than any specific object and can only access static members. It is declared with the 'static' keyword.

## Question 24
What is a const member function?

### Options
A) A function that cannot be called on const objects
B) A function that cannot modify the object's state
C) A function that is declared with the keyword 'const'
D) Both B and C

### Your Answer:
B

### Correct Answer:
D

### Explanation:
A const member function is declared with the 'const' keyword and guarantees that it will not modify the object's state. It can be called on const objects.

## Question 25
What is the purpose of the 'mutable' keyword?

### Options
A) To make a member variable constant
B) To make a member variable modifiable even in const objects
C) To make a member variable static
D) To make a member variable private

### Your Answer:
B(I GUESS I AM NOT SURE NEVER USED EXPLAINATION IS APRICIATED)

### Correct Answer:
B

### Explanation:
The 'mutable' keyword allows a member variable to be modified even within a const member function or when the object is const.

## Question 26
What is RTTI?

### Options
A) Run-Time Type Identification
B) Real-Time Type Information
C) Run-Time Type Information
D) Real-Time Type Identification

### Your Answer:
C

### Correct Answer:
C

### Explanation:
RTTI stands for Run-Time Type Information, which allows the type of an object to be determined during program execution.

## Question 27
What is the difference between early binding and late binding?

### Options
A) Early binding is resolved at compile time, late binding at runtime
B) Early binding is resolved at runtime, late binding at compile time
C) There is no difference
D) Early binding is faster than late binding

### Your Answer:
A(I GUES )

### Correct Answer:
A

### Explanation:
Early binding (static binding) resolves function calls at compile time, while late binding (dynamic binding) resolves them at runtime, typically through virtual functions.

## Question 28
What is a namespace?

### Options
A) A way to group related classes and functions
B) A way to define a new data type
C) A way to create a new scope
D) A way to declare variables

### Your Answer:
A

### Correct Answer:
A

### Explanation:
A namespace is a declarative region that provides scope to identifiers (names of types, functions, variables, etc.) to prevent name collisions.

## Question 29
What is the purpose of the 'using' directive?

### Options
A) To create an alias for a namespace
B) To import all names from a namespace
C) To define a new namespace
D) Both A and B

### Your Answer:
D(I GUESS)

### Correct Answer:
D

### Explanation:
The 'using' directive can be used to import all names from a namespace (`using namespace std;`) or to create an alias for a namespace (`using alias = namespace;`).

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

### Correct Answer:
C

### Explanation:
The static variable 'count' is initialized to 0. When two objects (t1 and t2) are created, the constructor is called twice, incrementing 'count' to 2. The static method 'getCount()' returns this value.

## Score: 24/30

You did quite well on this OOP mock test! You have a solid understanding of most OOP concepts. There were a few areas where your understanding could be refined:

1. Encapsulation - Remember it's primarily about combining data and methods, though hiding internal details is also part of it.
2. Access modifiers - 'private' restricts access to within the same class only.
3. Copy constructor - It's specifically about initializing an object with another object of the same type.
4. Static member functions - They are declared with 'static' and can only access static members.
5. Const member functions - They are declared with 'const' and guarantee not to modify the object's state.
6. Virtual functions - Even without 'override', if the base method is 'virtual', the derived implementation will be called.

Would you like to discuss any of these concepts in more detail?