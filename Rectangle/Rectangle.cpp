//class implementation of Rectangle
#include "Rectangle.h"
using namespace std;
  
  Rectangle::Rectangle(){
    rectangleLength = 0;
    rectangleWidth  = 0;
  }
  void Rectangle::setRectangleLength(){
   
  }
 
 float Rectangle::getRectangleLength(){
    return rectangleLength;
 }

 void Rectangle::setRectangleWidth(const float newWidth){
    rectangleWidth = newWidth;
 }
 float Rectangle::getRectangleWidth(){
    return rectangleWidth;
 }
 float Rectangle::areaRectangle(){
   float (rectangleLength * rectangleWidth);
 }


