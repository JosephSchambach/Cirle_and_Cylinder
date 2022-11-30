#ifndef FINALPROJECT5_CYLINDER_H
#define FINALPROJECT5_CYLINDER_H
#include "Circle.h"

// Create a derived class Cylinder from circle
class Cylinder : public Circle {
public:
   // Constructor to get length and radius
   explicit Cylinder(double = 1.0, double = 1.0);
   double calcVal() override; // Function to calculate the area

protected:
   double length; // Protected variable length
};


#endif //FINALPROJECT5_CYLINDER_H
