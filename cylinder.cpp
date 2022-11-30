#include "Cylinder.h"

// Constructor to initialize length and radius
Cylinder::Cylinder(double len, double rad)
   : Circle(rad) { // Initialize the radius of the circular base
   length = len; // Initialize length
}

// Function to calculate and return the area of the cylinder
double Cylinder::calcVal(){
   double area;
   area = Circle::calcVal() * length; // Multiply length by area of circular base
   return area;
}
