# Cirle_and_Cylinder
C++ program to make use of virtual functions and polymorphism

The program was from a final project in my C++ course that was meant to test knowledge of polymorphism and virtual functions. The function centers around the areas of a circle and the ares of a cylinder, which utilizes the area of a circle.

main.cpp
Main initializes a circle object and then calculates and prints the area of that circle. The program then moves on to initialize and declare a cylinder function of different size, then calculates and prints out the area of the cylinder. 

circle.h and circle.cpp
The circle object contains a constructor that takes in a value of radius in order to calculate the area of the given circle. The function that calculates the area of the circle is a virtual function as it will be utilized in the cylinder portion of program since the cylinder has a circular base.

cylinder.h and cylinder.cpp
The cylinder object contains a constructor that references the circle constructor to create a cylinder of a certain length and that contains a circular top and bottom of a radius of a certain length. Then, utilizing the circle objects area function, the cylinder object calculates the area of a cylinder of those dimensions using an overriden function, calcVal.
