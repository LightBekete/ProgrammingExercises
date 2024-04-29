#pragma once

namespace allShapes {
    class Circle{
    private:
     double radius;
    public:
    Circle();
    Circle(double newRadius);
    ~Circle();
    //getter and setter functions
    void setRadius(const double newRadius){
        radius = newRadius;
    }
    double getRadius() const {
        return radius;
    }
};

 
   class Triangle{
    private:
     double base;
     double height;
    public:
    Triangle();
    Triangle(double newBase , double newHeight);
    ~Triangle();
    //getter and setter functions
    void setBase(const double newBase){
        base = newBase;
    }
    void setHeight(const double newHeight){
        height = newHeight;
    }
    double getBase() const {
        return base;
    }
    double getHeight()const {
        return height;
    }
};

   
class Sqaure{
    private:
     double side;
    public:
    Sqaure();
    Sqaure(double newSide);
    ~Sqaure();
    //getter and setter functions
    void setSide(const double newSide){
        side = newSide;
    }
    double getSide() const {
        return side;
    }
};
}
