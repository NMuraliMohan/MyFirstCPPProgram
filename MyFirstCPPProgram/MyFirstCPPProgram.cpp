// MyFirstCPPProgram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout;
using std::cin;

#include "MarksOfStudents.h"

#include "MarksOfStudents.h"

#include "MarksOfStudents.h"
#include "MyDemoClassForCtors.h"
#include "ClassWithNoConstructors.h"

// Two functions with the same name but differing in argument types are permitted
// Method overloading

int main()
{
    // printf("Our first program");

    MyDemoClassForConstructors createAnObjectOfDemoConstructor;

   // MyDemoClassForConstructors createAnObjectOfDemoConstructor2("Koushik", 8.0);
    //MyDemoClassForConstructors createAnObjectOfDemoConstructor3{ "Koushik", 8.0 };
    MyDemoClassForConstructors incorrectCreateAnObjectOfDemoConstructor{ 8.0, 3, "Koushik"};

    ClassWithNoConstructors object1{}; // default
    ClassWithNoConstructors object2{ 4.5};
   // ClassWithNoConstructors object3{ 4.5, "Lousy Object name in 3" };
   // ClassWithNoConstructors object4{ 4.5, "Lousy Object name in 4" , 'C' };
  //  ClassWithNoConstructors object5{ "Loust Object name in 4" , 4.5, 'C' };






    int markPhysics;
    int markChemistry;
    std::cin >> markPhysics;
    std::cin >> markChemistry;
    
    double result;
    result = add(markPhysics, markChemistry, 50);

    result = add(markPhysics, markChemistry);
    
    std::cout << "the total marks are " << (double) result;

    std::cout << "\nthe total marks are " << add(20.5, 8.7);

    std::cout << '\n';
    
    int marks[5] = { 100, 120, 80, 70, 50 };

    struct student {
        int yearOfStudy;
        int marks;
        double averageOfMarks;
    };

    //marks is an instance of int type

    student murali { 2, 60, 77.7 };
    cout << murali.yearOfStudy << " " << murali.marks << " " << murali.averageOfMarks << '\n';

    class Car {
    private:
        // A set of properties or attributes or data
        int steeringWheel;
        unsigned int wheels;
        unsigned int seats;
        unsigned long chassisNumber;
        int seatingCapacity;

        void initialize();

    public:
        // A set of methods that can act on the data
        void Accelerate();
        void Decelerate();
        void protectPassenger(int type);
    };


    class Mobile {

        // A set of properties or attributes
        int steeringWheel;
        unsigned int wheels;
        unsigned int seats;
        unsigned long chassisNumber;
        int seatingCapacity;


        // A set of methods that can act on the data
        void Accelerate();
        void Decelerate();
        void protectPassenger(int type);
    };
    
    
    
    
    
    /*  cout << abs(-25);

                                                             

    cerr << "some text";

    cout << "Please enter your name: ";
    char name[24];
    cin >> name;

    cout << "Output: The user entered " << name;*/
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
