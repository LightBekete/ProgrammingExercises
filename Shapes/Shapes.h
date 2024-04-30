#ifndef Shapes_h
#define Shapes_h


namespace allShapes {

    class Circle{
    private:
     double radius;
    public:
    Circle();
    Circle(double newRadius);
    ~Circle();
    //getter and setter functions
    void setRadius(const double newRadius);

    double getRadius();
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
    void setBase( double newBase);
    void setHeight( double newHeight);
    double getBase();
    double getHeight();
};
  
class Sqaure{
    private:
     double side;
    public:
    Sqaure();
    Sqaure(double newSide);
    ~Sqaure();
    //getter and setter functions
    void setSide(const double newSide);
    double getSide();
};




 class Area{
   public:
   ~Area();
   static double  areaOfSquare( Sqaure& newSquare);
   static double  areaOfTriangle( Triangle& newTriangle);
   static double areaOfCircle( Circle& newCircle);

 };

};

#endif