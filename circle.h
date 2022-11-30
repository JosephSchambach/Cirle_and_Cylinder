#ifndef FINALPROJECT5_CIRCLE_H
#define FINALPROJECT5_CIRCLE_H

// Class circle header
class Circle {
public:
   explicit Circle(double = 1.0);// Constructor to get radius
   virtual double calcVal(); // Function to calculate area of circle

protected:
   // Protected variables radius and PI
   double radius;
   double PI{3.14};
};

