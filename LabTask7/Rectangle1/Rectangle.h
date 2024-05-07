/*pragma once caused compilation error instead, 
i have used #ifndef Rectangle_h #define Rectangle_h #endif multiple inclusion guard*/
#ifndef Rectangle_h
#define Rectangle_h

class Rectangle{
    private:
    float rectangleLength;
    float rectangleWidth;

    public:
    //Default constructor
    Rectangle();
    Rectangle(float length, float width);
    //creating a destructor
    ~Rectangle();

    //creating setter and getter functions for length  of the rectangle

     void setRectangleLength(float rectangleLength);
     float getRectangleLength();

    //creating setter and getter functions for witdth  of the rectangle
    void setRectangleWidth(float rectangleW);
    float getRectangleWidth();

    //function for calculating rectangle area
    float areaRectangle();

     
 };
 #endif