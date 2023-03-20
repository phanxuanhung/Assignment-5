#ifndef circle_circle_h
#define circle_circle_h
#include <iostream>
using namespace std;
class circle {
    private:
        double Radius;
        float pi = 3.14159;
    public:
        circle ();
        circle ( double radius);
        circle (float pi);
        void setRadius (double radius);
        double getRadius();
        double getArea();
        double getDiameter();
        double getCircumference();
        void display();
};
#endif
