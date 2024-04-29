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

void allShapes::Triangle::setBase(const double newBase){
    base = newBase;
}
void allShapes::Triangle::setHeight(const double newHeight){
    height = newHeight;
}
 
double allShapes::Triangle::getBase() const{
    return base;
}
double allShapes::Triangle::getHeight() const{
    return height;
}

//creating destructors
allShapes::Triangle::~Triangle(){}