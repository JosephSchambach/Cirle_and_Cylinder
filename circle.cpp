#include "Circle.h"
// Constructor for circle that initializes the radius
Circle::Circle(double rad){
   radius = rad;
}

// Function to calculate and return the area of the circle
double Circle::calcVal(){
   double area;
   area = PI * radius * radius;
   return area;
}
