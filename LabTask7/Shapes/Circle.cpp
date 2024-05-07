#include "Shapes.h"
//creating constructors
  
  allShapes::Circle::Circle(){
    radius = 0;
  }
  allShapes::Circle::Circle(double newRadius){
    radius = newRadius;
  }
  //setter and getter function implementation

 void allShapes::Circle::setRadius(double newRadius){
    radius = newRadius;
 }
 double allShapes::Circle::getRadius(){
    return radius;
 }
 
 //creating destructor
 allShapes::Circle::~Circle(){}