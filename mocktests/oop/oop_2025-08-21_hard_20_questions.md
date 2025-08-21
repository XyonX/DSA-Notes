# OOP Mock Test - 2025-08-21

**Difficulty:** Hard
**Focus:** Object-Oriented Programming (C++)
**Number of Questions:** 20

---

## Instructions:
- This test focuses on advanced C++ OOP concepts typically asked in service-based company placement tests.
- Topics include: Inheritance, Polymorphism (Function Overloading, Operator Overloading, Virtual Functions), Encapsulation, Abstraction (Abstract Classes, Interfaces), Classes and Objects, Constructors/Destructors, Exception Handling.
- Answer each question by writing your choice or response under the "#### Your Answer:" section for each question.
- For code output prediction questions, write the exact output or "Error" if applicable.
- For code writing questions, write the complete code snippet.
- For theory questions, provide concise explanations.

---

### Question 1 (Code Output Prediction)
What will be the output of the following C++ code?
```cpp
#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() { cout << "Base"; }
};

class Derived : public Base {
public:
    void show() { cout << "Derived"; }
};

int main() {
    Base* b;
    Derived d;
    b = &d;
    b->show();
    return 0;
}
```

#### Your Answer:
output show "Derived"

### Question 2 (Code Output Prediction)
What will be the output of the following C++ code?
```cpp
#include <iostream>
using namespace std;

class Test {
    int x;
public:
    Test(int x = 0) { this->x = x; }
    void change(Test *t) { t->x = 10; }
    void print() { cout << x; }
};

int main() {
    Test t1(5);
    t1.change(&t1);
    t1.print();
    return 0;
}
```

#### Your Answer:
it should print 5

### Question 3 (Code Output Prediction)
What will be the output of the following C++ code?
```cpp
#include <iostream>
using namespace std;

class A {
public:
    A() { cout << "A"; }
    ~A() { cout << "~A"; }
};

class B : public A {
public:
    B() { cout << "B"; }
    ~B() { cout << "~B"; }
};

int main() {
    B b;
    return 0;
}
```

#### Your Answer:
IT WILL Print "A","B","~B","~A"

### Question 4 (Code Output Prediction)
What will be the output of the following C++ code?
```cpp
#include <iostream>
using namespace std;

class Base {
public:
    void show() { cout << "Base"; }
};

class Derived : public Base {
public:
    void show(int x) { cout << "Derived " << x; }
};

int main() {
    Derived d;
    d.show();
    return 0;
}
```

#### Your Answer:
"Derived"

### Question 5 (Code Output Prediction)
What will be the output of the following C++ code?
```cpp
#include <iostream>
using namespace std;

class Test {
    int x;
public:
    Test(int x = 0) { this->x = x; }
    Test operator+(Test t) {
        Test temp;
        temp.x = this->x + t.x;
        return temp;
    }
    void print() { cout << x; }
};

int main() {
    Test t1(5), t2(10);
    Test t3 = t1 + t2;
    t3.print();
    return 0;
}
```

#### Your Answer:
15

### Question 6 (Code Output Prediction)
What will be the output of the following C++ code?
```cpp
#include <iostream>
using namespace std;

class Base {
public:
    virtual ~Base() { cout << "Base Destructor "; }
};

class Derived : public Base {
public:
    ~Derived() { cout << "Derived Destructor "; }
};

int main() {
    Base* b = new Derived();
    delete b;
    return 0;
}
```

#### Your Answer:
"Derived Destructor" , "Base Destructor"

### Question 7 (Code Output Prediction)
What will be the output of the following C++ code?
```cpp
#include <iostream>
using namespace std;

class A {
public:
    virtual void show() = 0;
};

class B : public A {
public:
    void show() { cout << "B"; }
};

int main() {
    A* a;
    B b;
    a = &b;
    a->show();
    return 0;
}
```

#### Your Answer:
"B"

### Question 8 (Code Output Prediction)
What will be the output of the following C++ code?
```cpp
#include <iostream>
using namespace std;

class Test {
    int x;
public:
    Test(int x = 0) { this->x = x; }
    Test& operator++() { // Pre-increment
        ++x;
        return *this;
    }
    Test operator++(int) { // Post-increment
        Test temp(*this);
        ++x;
        return temp;
    }
    void print() { cout << x; }
};

int main() {
    Test t(5);
    Test t2 = t++;
    t.print();
    t2.print();
    return 0;
}
```

#### Your Answer:
6,5

### Question 9 (Code Output Prediction)
What will be the output of the following C++ code?
```cpp
#include <iostream>
using namespace std;

class Base {
public:
    void show() { cout << "Base "; }
};

class Derived : public Base {
public:
    void show() { cout << "Derived "; }
};

int main() {
    Base* b;
    Derived d;
    b = &d;
    b->show();
    return 0;
}
```

#### Your Answer:
"Derived "

### Question 10 (Code Output Prediction)
What will be the output of the following C++ code?
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
    Test t1, t2, t3;
    cout << Test::getCount();
    return 0;
}
```

#### Your Answer:
3

### Question 11 (Code Correction)
Identify and correct the error in the following C++ code:
```cpp
#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() = 0;
};

class Derived : public Base {
public:
    void show() { cout << "Derived"; }
};

int main() {
    Base b; // Error here
    Derived d;
    b.show();
    d.show();
    return 0;
}
```

#### Your Answer:
we cant instance of class with pure virutal which becomes a abstract class
so Base b is wrong or will cause error;

### Question 12 (Code Correction)
Identify and correct the error in the following C++ code:
```cpp
#include <iostream>
using namespace std;

class Test {
    int x;
public:
    Test(int x) { this->x = x; }
    Test operator+(int x) {
        Test temp;
        temp.x = this->x + x;
        return temp;
    }
    void print() { cout << x; }
};

int main() {
    Test t1(5);
    Test t2 = t1 + 10;
    t2.print();
    return 0;
}
```

#### Your Answer:

this code seem to be correct


### Question 13 (Code Writing)
Write a C++ program that demonstrates function overloading with three functions named `area` to calculate the area of a circle, rectangle, and triangle.

#### Your Answer:
SKIP LARGE QUESTION

### Question 14 (Code Writing)
Write a C++ program that demonstrates operator overloading for the `==` operator to compare two complex numbers.

#### Your Answer:
SKIP IT

### Question 15 (Code Writing)
Write a C++ program that demonstrates single inheritance with a base class `Person` and a derived class `Student`. Include constructors and a method to display information.

#### Your Answer:
SKIP

### Question 16 (Theory)
Explain the difference between compile-time polymorphism and runtime polymorphism in C++.

#### Your Answer:
Compile time polymorphism: compiler time polymorphism refers to the fucnton overloading and operator overloading the comppiler knwos which version to call absed on the parameater at the compiler time
Runtime polymorphism: Runtime polyhmorphism refers to the function overriding , the compiler doesnt knwo whci version of fucntion to call at compiler time ,at runtime depending the object instance it calls it so its called runtime

### Question 17 (Theory)
Explain the difference between an abstract class and an interface in the context of C++.

#### Your Answer:

abstract class vs interface: in  cpp object oriendted programming a abstract class in a class whihc is having at least one pure virtual fucntion  an abstract class can contian data member too but an interface cant cotian data member and it can onlhy have fucntions 
### Question 18 (Theory)
What is the purpose of a virtual destructor in C++? When should it be used?

#### Your Answer:

an virtual destrcutor is a descructor which can be override in child class it is used when we wnat to override it in child class
### Question 19 (Theory)
Explain the concept of constructor chaining in C++. How is it achieved?

#### Your Answer:
i supppose contructor chaining referes to caling hte parent constrcutor in child class and we can cal it by directly accessing from the  class name in chiod class

### Question 20 (Theory)
What is the difference between `throw` and `throws` in C++? Explain with examples.

#### Your Answer:
NOT SURE