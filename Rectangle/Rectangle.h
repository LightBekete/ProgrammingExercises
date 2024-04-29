#pragma once
using namespace std;

 class Rectangle{
    private:
    float rectangleLength;
    float rectangleWidth;

    public:
    //Default constructor
    Rectangle();
    //creating a destructor
    ~Rectangle();

    //creating setter and getter functions for length  of the rectangle

     void setRectangleLength();
     float getRectangleLength();

    //creating setter and getter functions for witdth  of the rectangle
    void setRectangleWidth(float length);
    float getRectangleWidth();

    //function for calculating rectangle area
    float areaRectangle();

     
 };