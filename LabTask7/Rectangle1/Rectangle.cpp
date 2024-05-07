
//class implementation of Rectangle
#include "Rectangle.h"
  
  Rectangle::Rectangle(){
    rectangleLength = 0;
    rectangleWidth  = 0;
  }
  Rectangle::Rectangle(float length, float width){
   rectangleLength = length;
   rectangleWidth = width;
  }
  //getter and setter functions implementation

  void Rectangle::setRectangleLength( float newLength){
    rectangleLength = newLength;
  }
 
 float Rectangle::getRectangleLength(){
    return rectangleLength;
 }

 void Rectangle::setRectangleWidth( float newWidth){
    rectangleWidth = newWidth;
 }
 float Rectangle::getRectangleWidth(){
    return rectangleWidth;
 }
 float Rectangle::areaRectangle(){
   float area =  rectangleLength * rectangleWidth;
    return area;
 }

//Destructor implemented
 Rectangle::~Rectangle(){

 }
 


 


