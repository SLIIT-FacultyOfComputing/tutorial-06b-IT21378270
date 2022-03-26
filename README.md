![logo](/resources/tutelogo.png)

## <div align="center">Tutorial 06</div>

## Objectives : Learn to create Classes and use Setters and Getters in C++

This week we will implement a class in C++.  Use your Repl.IT account and use the Instructions provided by your Instructors to complete the Tutorial.  All instructions are in the Repl.IT and GitHub Classrooms for the Tutorial Questions for Week 07. Please submit your solutions using Repl.IT itself.

## Exercise 1 - Student Class
![Exercise 1](/resources/Picture1.png)

Using the Student.h and Student.cpp Implement the ```Student``` class
### In Student.h
1.	Add the private properties ```studentId``` and ```name``` in the private section.
2.	Add a method called ```assignDetails()``` to assign the ```studentid``` and ```name```
3.	Add a method called ```display()``` to display the ```studentid``` and ```name```

```c++
class Student {
  // private section
  //    int studentId
  //    name <- 20 charcters
  
  // public section
  //    assignDetails() method declaration
  //    display() method declaration
}

```
### In Student.cpp
1.	Implement the Methods ```assignDetails()``` and ```display()```
```c++
#include "Student.h"
#include <iostream>

// Assign studentId and name
Student::assignDetails() {
  
}

// Display StudentId and Name
Student::display() {
  
}
```
### In Excercise01.cpp
1.	Do not change anything

## Exercise 2 - Rectangle Class
![Exercise 1](/resources/Picture2.png)

Using the Box.h and Box.cpp Implement the Box class
### In Box.h
1.	Write the prototypes for the **setters** for ```length```, ```width``` and ```height```
2.	Write the prototypes **getters** for ```length```, ```width``` and ```height```
```c++
class Box {
    private:
       int length;
       int width;
       int height;
    public:
       // write prototypes of setters for length, width and height
       // write prototypes of getters for length, width and height 
    int calcVolume();
};
```
### In Box.cpp
1.	Implement the **setters** for ```length```, ```width``` and ```height```
2.	Implement the **getters** for ```length```, ```width``` and ```height```
3.	Implement the ```calcVolume()``` method
```c++
#include "Box.h"

// Implement setters and getters

// Implmenet the calcVolume() unction
int Box::calcVolume() {
}
```

### In Exercise02.cpp
1.	Create a ```Box``` type object called box1
2.	Assign the keyboard input of ```length```, ```width``` and ```height``` to the box1 object using setters
3.	Do not change any other coding in the Exercise02.cpp

