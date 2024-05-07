#include "Shapes.h"
#include<cmath>

double allShapes::Area::areaOfCircle( Circle& newCircle){
   return M_PI * newCircle.getRadius() * newCircle.getRadius();
}
double allShapes::Area::areaOfSquare( Sqaure& newSquare){
    return newSquare.getSide() * 4;
}
double allShapes::Area::areaOfTriangle( Triangle& newTriangle){
    return 0.5 * newTriangle.getBase() * newTriangle.getHeight();
}
//creating a destructor
allShapes::Area::~Area(){}