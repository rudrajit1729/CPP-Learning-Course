# Object Oriented Programming

Object-oriented programming – As the name suggests uses objects in programming. Object-oriented programming aims to implement real-world entities like inheritance, hiding, polymorphism, etc in programming. The main aim of OOP is to bind together the data and the functions that operate on them so that no other part of the code can access this data except that function.

Key Features Of OOP:
- Class
- Objects
- Encapsulation
- Inheritance
- Polymorphism

Here we will try and cover all those topics from scratch.


Also we will cover
- Structs : They are similar to classes but used in small scale problems
- Multiple File Compilation : Creating headers, utility functions and a lot more.
- Friend Functions
- Templatized Classes
- Constructors & Destructors
- Operator Overloading

# Basic Definitions

## Class

The building block of C++ that leads to Object-Oriented programming is a Class. It is a user-defined data type, which holds its own data members and member functions, which can be accessed and used by creating an instance of that class. A class is like a blueprint for an object.

For Example: Consider the Class of Cars. There may be many cars with different names and brand but all of them will share some common properties like all of them will have 4 wheels, Speed Limit, Mileage range etc. So here, Car is the class and wheels, speed limits, mileage are their properties.

A Class is a user-defined data-type which has data members and member functions.
Data members are the data variables and member functions are the functions used to manipulate these variables and together these data members and member functions define the properties and behaviour of the objects in a Class.
In the above example of class Car, the data member will be speed limit, mileage etc and member functions can apply brakes, increase speed etc.
We can say that a Class in C++ is a blue-print representing a group of objects which shares some common properties and behaviours.

## Object

An Object is an identifiable entity with some characteristics and behaviour. An Object is an instance of a Class. When a class is defined, no memory is allocated but when it is instantiated (i.e. an object is created) memory is allocated.

## Encapsulation

In normal terms, Encapsulation is defined as wrapping up of data and information under a single unit. In Object-Oriented Programming, Encapsulation is defined as binding together the data and the functions that manipulate them.

## Inheritance

The capability of a class to derive properties and characteristics from another class is called Inheritance. Inheritance is one of the most important features of Object-Oriented Programming.

- Sub Class: The class that inherits properties from another class is called Sub class or Derived Class.


- Super Class:The class whose properties are inherited by sub class is called Base Class or Super class.


- Reusability: Inheritance supports the concept of “reusability”, i.e. when we want to create a new class and there is already a class that includes some of the code that we want, we can derive our new class from the existing class. By doing this, we are reusing the fields and methods of the existing class.
Example: Dog, Cat, Cow can be Derived Class of Animal Base Class.

## Polymorphism

The word polymorphism means having many forms. In simple words, we can define polymorphism as the ability of a message to be displayed in more than one form.

A person at the same time can have different characteristic. Like a man at the same time is a father, a husband, an employee. So the same person posses different behaviour in different situations. This is called polymorphism.

An operation may exhibit different behaviours in different instances. The behaviour depends upon the types of data used in the operation.

C++ supports operator overloading and function overloading.

- Operator Overloading: The process of making an operator to exhibit different behaviours in different instances is known as operator overloading.

- Function Overloading: Function overloading is using a single function name to perform different types of tasks.

Polymorphism is extensively used in implementing inheritance.
Example: Suppose we have to write a function to add some integers, some times there are 2 integers, some times there are 3 integers. We can write the Addition Method with the same name having different parameters, the concerned method will be called according to parameters.

