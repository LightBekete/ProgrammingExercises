#include "Shapes.h"
//creating constructors
allShapes::Triangle::Triangle(){
    base = 0;
    height =0;
}
allShapes::Triangle::Triangle(double newBase , double newHeight){
    base = newBase;
    height = newHeight;
}

//setter and getter function implementation

void allShapes::Triangle::setBase( double newBase){
    base = newBase;
}
void allShapes::Triangle::setHeight( double newHeight){
    height = newHeight;
}
 
double allShapes::Triangle::getBase() {
    return base;
}
double allShapes::Triangle::getHeight() {
    return height;
}

//creating destructors
allShapes::Triangle::~Triangle(){}