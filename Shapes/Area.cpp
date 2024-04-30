#include "Shapes.h"
#include<cmath>

double allShapes::Area::areaOfCircle(const Circle& newCircle){
   return M_PI * newCircle.getRadius() * newCircle.getRadius();
}
double allShapes::Area::areaOfSquare(const Sqaure& newSquare){
    return newSquare.getSide() * newSquare.getSide();
}
double allShapes::Area::areaOfTriangle(const Triangle& newTriangle){
    return 0.5 * newTriangle.getBase() * newTriangle.getHeight();
}
//creating a destructor
allShapes::Area::~Area(){}