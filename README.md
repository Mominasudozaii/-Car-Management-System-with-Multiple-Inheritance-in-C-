# -Car-Management-System-with-Multiple-Inheritance-in-C-
Car Management System

Overview

The Car Management System is a C++ program that demonstrates object-oriented programming (OOP) concepts such as inheritance, encapsulation, and polymorphism. The system allows users to enter and display details about different types of cars, including Electric, Battery, Engine, and Hybrid Cars, using a hierarchical class structure.

Features

Users can choose between different car categories:

Car (Base Class)

Electric Car

Battery Car

Engine Car

Hybrid Car

Each type of car has attributes such as plate number, color, model, make, max speed, and load capacity.

The program utilizes multiple inheritance for Hybrid Cars.

Data input validation ensures users enter correct values.

Class Structure

1. Car (Base Class)

Attributes:

Plate Number

Color

Model

Make

Functions:

setData() – Takes input from the user.

printData() – Displays car details.

2. ElectricCar (Derived from Car)

Additional Attributes:

Max Speed

Load Capacity

Functions:

ElSet() – Inputs additional attributes.

ElGet() – Displays details.

3. BatteryCar (Derived from Car)

Same attributes and functions as ElectricCar.

4. EngineCar (Derived from Car)

Same attributes and functions as ElectricCar.

5. HybridCar (Derived from BatteryCar & EngineCar using Multiple Inheritance)

Additional Attributes:

Max Speed (Hybrid-specific)

Load Capacity (Hybrid-specific)

Functions:

Hset() – Inputs attributes from both parent classes.

Hget() – Displays details from both parent classes.

How to Run the Program

Compile the program using a C++ compiler (e.g., g++ car_management.cpp -o car_management).

Run the compiled executable (./car_management on Linux/Mac or car_management.exe on Windows).

Follow the prompts to:

Choose a car type.

Enter car details.

View stored details.

Example Run

In which class you want to enter data? Press No. 1-5:
[1] Car
[2] Electric Car
[3] Battery Car
[4] Engine Car
[5] Hybrid Car
2
How many number of records you want to enter: 1

Enter data for Electric Car 1:
Enter Plate No: ABC-123
Enter Color: Red
Enter Model: Tesla X
Enter Make: Tesla
Enter Max Speed: 200
Enter Load Capacity: 500

Data for Electric Car 1:
Plate No: ABC-123
Color: Red
Model: Tesla X
Make: Tesla
Max Speed: 200
Load Capacity: 500

Concepts Demonstrated

Encapsulation – Data members are private, accessible via public methods.

Inheritance – ElectricCar, BatteryCar, and EngineCar inherit from Car.

Multiple Inheritance – HybridCar inherits from both BatteryCar and EngineCar.

User Input Handling – Ensures correct data entry.

Future Enhancements

Implement file storage to save car details.

Add a GUI interface for better user experience.

Include error handling for invalid inputs.

Author

Momina Haroon

This README provides an overview of the project, including its structure, functionality, and instructions for running it. 🚗💨
