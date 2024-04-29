#include "Shapes.h"
//creating constructors

allShapes::Sqaure::Sqaure(){
    side = 0;
}
allShapes::Sqaure::Sqaure(double newSide){
    side = newSide;
}
//setters and getters implementation

void allShapes::Sqaure::setSide(const double newSide){
    side = newSide;
}
double allShapes::Sqaure::getSide() const{
    return side;
}

//creating destructor
allShapes::Sqaure::~Sqaure(){}