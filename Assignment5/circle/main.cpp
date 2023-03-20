#include"circle.h"
using namespace std;
main (){
	double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    
    circle circle(radius);
    
    cout << "Area of the circle: " << circle.getArea() << endl;
    cout << "Diameter of the circle: " << circle.getDiameter() << endl;
    cout << "Circumference of the circle: " << circle.getCircumference() << endl;
    
    return 0;
};