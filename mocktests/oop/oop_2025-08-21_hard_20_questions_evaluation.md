# OOP Mock Test Evaluation - 2025-08-21

**Difficulty:** Hard
**Focus:** Object-Oriented Programming (C++)
**Number of Questions:** 20
**Questions Answered:** 15 (Questions 1-12, 16-20)
**Your Score:** 10/15 (66.67%)

---

## Evaluation & Explanations:

### Question 1 (Code Output Prediction)
**Your Answer:** output show "Derived"
**Correct Answer:** Derived
**Explanation:** Correct. The `show()` method in `Derived` class overrides the virtual `show()` method in `Base` class. When called through a `Base` pointer pointing to a `Derived` object, the `Derived` version is executed due to runtime polymorphism.

### Question 2 (Code Output Prediction)
**Your Answer:** it should print 5
**Correct Answer:** 10
**Explanation:** Incorrect. The `change()` method modifies the `x` member of the object passed to it. Since `t1.change(&t1)` passes the address of `t1`, the `x` value of `t1` is changed from 5 to 10. Therefore, `t1.print()` outputs 10.

### Question 3 (Code Output Prediction)
**Your Answer:** IT WILL Print "A","B","~B","~A"
**Correct Answer:** AB~B~A
**Explanation:** Correct. When an object of class `B` is created, the constructor of `A` is called first, followed by the constructor of `B`. When the object goes out of scope, the destructor of `B` is called first, followed by the destructor of `A`.

### Question 4 (Code Output Prediction)
**Your Answer:** "Derived"
**Correct Answer:** Error
**Explanation:** Incorrect. The `Derived` class has a method `show(int x)`, but the `main` function calls `d.show()` without any arguments. The `Base` class's `show()` method is not inherited because the `Derived` class has a method with the same name but different parameters, which hides the base class method. Since there's no `show()` method in `Derived` that takes no arguments, this results in a compilation error.

### Question 5 (Code Output Prediction)
**Your Answer:** 15
**Correct Answer:** 15
**Explanation:** Correct. The `operator+` function adds the `x` values of `t1` and `t2` (5 + 10 = 15) and returns a new `Test` object with this sum. The `print()` method of this new object outputs 15.

### Question 6 (Code Output Prediction)
**Your Answer:** "Derived Destructor" , "Base Destructor"
**Correct Answer:** Derived Destructor Base Destructor
**Explanation:** Correct. When `delete b` is called, the destructor of the actual object type (`Derived`) is called first due to the virtual destructor in `Base`. Then, the destructor of `Base` is called.

### Question 7 (Code Output Prediction)
**Your Answer:** "B"
**Correct Answer:** B
**Explanation:** Correct. Class `A` is an abstract class with a pure virtual function `show()`. Class `B` implements this function. When `a->show()` is called, it executes `B`'s implementation, printing "B".

### Question 8 (Code Output Prediction)
**Your Answer:** 6,5
**Correct Answer:** 65
**Explanation:** Correct. `t++` uses the post-increment operator, which creates a copy of `t` (with value 5) before incrementing `t` to 6. `t2` gets the copied value (5). Then `t.print()` outputs 6 and `t2.print()` outputs 5.

### Question 9 (Code Output Prediction)
**Your Answer:** "Derived "
**Correct Answer:** Base
**Explanation:** Incorrect. The `show()` method in `Base` is not virtual, so the method called is determined by the pointer type, not the object type. Since `b` is a `Base` pointer, `Base::show()` is called, printing "Base".

### Question 10 (Code Output Prediction)
**Your Answer:** 3
**Correct Answer:** 3
**Explanation:** Correct. The static member `count` is incremented each time a `Test` object is created. Three objects (`t1`, `t2`, `t3`) are created, so `count` becomes 3.

### Question 11 (Code Correction)
**Your Answer:** we cant instance of class with pure virtual which becomes a abstract class so Base b is wrong or will cause error;
**Correct Answer:** The error is that we cannot create an instance of an abstract class. To fix it, we should remove `Base b;` or make `Base` a non-abstract class.
**Explanation:** Correct. You've correctly identified that `Base` is an abstract class due to the pure virtual function and cannot be instantiated.

### Question 12 (Code Correction)
**Your Answer:** this code seem to be correct
**Correct Answer:** The code has an error. The default constructor is not available because a parameterized constructor is defined. To fix it, either add a default constructor or use `Test temp(0);` in the `operator+` function.
**Explanation:** Incorrect. When a parameterized constructor is defined, the compiler does not automatically provide a default constructor. The line `Test temp;` in `operator+` will cause a compilation error because there's no default constructor available.

### Question 16 (Theory)
**Your Answer:** Compile time polymorphism: compiler time polymorphism refers to the function overloading and operator overloading the compiler knows which version to call based on the parameter at the compiler time Runtime polymorphism: Runtime polymorphism refers to the function overriding , the compiler doesn't know which version of function to call at compiler time ,at runtime depending the object instance it calls it so its called runtime
**Correct Answer:** Your answer is largely correct. Compile-time polymorphism (early binding) is resolved at compile time, including function overloading and operator overloading. Runtime polymorphism (late binding) is resolved at runtime, primarily through virtual functions and function overriding.
**Explanation:** Correct. You've accurately described both concepts.

### Question 17 (Theory)
**Your Answer:** abstract class vs interface: in cpp object oriented programming a abstract class is a class which is having at least one pure virtual function an abstract class can contain data member too but an interface cant contain data member and it can only have functions
**Correct Answer:** Your answer is mostly correct. In C++, an abstract class has at least one pure virtual function and can contain data members and concrete methods. C++ doesn't have a built-in interface keyword, but a class with only pure virtual functions and no data members serves as an interface.
**Explanation:** Correct. You've correctly identified the key differences.

### Question 18 (Theory)
**Your Answer:** an virtual destructor is a destructor which can be override in child class it is used when we want to override it in child class
**Correct Answer:** A virtual destructor ensures that the destructor of the derived class is called when an object is deleted through a base class pointer. It should be used in the base class when there's a possibility of deleting derived class objects through base class pointers to ensure proper cleanup.
**Explanation:** Partially correct. You've identified that it's related to inheritance, but missed the key point about ensuring proper cleanup when deleting derived objects through base pointers.

### Question 19 (Theory)
**Your Answer:** i suppose constructor chaining refers to calling the parent constructor in child class and we can call it by directly accessing from the class name in child class
**Correct Answer:** Constructor chaining in C++ refers to the process of calling one constructor from another within the same class or calling the base class constructor from a derived class constructor. It's achieved using member initializer lists with `this()` for same-class constructors and `BaseClassName()` for base class constructors.
**Explanation:** Partially correct. You've identified the concept of calling parent constructors, but missed the complete picture of calling constructors within the same class and the specific syntax.

### Question 20 (Theory)
**Your Answer:** NOT SURE
**Correct Answer:** C++ uses `throw` to explicitly throw an exception. There is no `throws` keyword in C++. In Java, `throws` is used in method signatures to declare exceptions that a method might throw.
**Explanation:** N/A (No answer provided)