#include "circle.h"
circle::circle(){
    this -> Radius = 0.0 ;
}
circle::circle (double radius){
    this -> Radius = radius;
}
double  circle::getRadius(){
    return this -> Radius;
}
double  circle:: getArea(){
    return pi* Radius * Radius;

}	
double circle::getDiameter() {
	return Radius * 2;
}
double circle ::getCircumference(){
    return 2 * pi * Radius;
}
void circle:: display (){
    
}