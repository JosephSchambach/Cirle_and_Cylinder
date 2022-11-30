#include <iostream>
#include "Circle.h"
#include "Cylinder.h"
using namespace std;

// Main function for testing
int main() {
   // Create an object of circle
   Circle circle(2);
   // Calculate the area of the circle
   double area = circle.calcVal();

   // Output the area of the circle
   cout << "Area of circle: \n";
   cout << area << endl;

   // Create an object of cylinder
   Cylinder cylinder(4, 4);
   // Calculate the area of the cylinder
   double cylinderArea = cylinder.calcVal();

   // Output the area of the cylinder
   cout << "Area of cylinder: \n";
   cout << cylinderArea << endl;
   return 0;
}

