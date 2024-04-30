#include <iostream>
#include "Shapes.h"
using namespace std;
void EntryWindow();
void CalculateOfSquare();
void CalculateOfCircle();
void CalculateOfTriangle();

  int main (){

     EntryWindow();

    return 0;
  }
  void EntryWindow(){
    cout<<"1. Calculate the of the circle"<<endl
        <<"2. Calculatethe area of the Triangle"<<endl
        <<"3. Calculate area of the Square"<<endl
        <<"4. Quit"<<endl;
        int choice;
        cin >> choice;
    switch(choice){
        case 1: CalculateOfCircle();
        break;
        case 2: CalculateOfTriangle();
        break;
        case 3: CalculateOfSquare();
        break;
        case 4: cout<<"The program has quitted"<<endl;
        break;
    }
  }
   void CalculateOfCircle(){
    allShapes::Circle circleObject;
    cout<<"Enter radius"<<endl;
    double radius;
    cin>>radius;
       circleObject.setRadius(radius);
       cout<<"The Area of the circle is: "<<allShapes::Area::areaOfCircle(circleObject);
       cout<<""<<endl;
       cout<<""<<endl;
       
    EntryWindow();
   }
   void CalculateOfTriangle(){
    allShapes::Triangle triangleObject;
    double base,height;
    cout<<"Enter base of the Triangle"<<endl;
    cin>>base;
    cout<<"Enter height of the Triangle"<<endl;
    cin>>height;
    triangleObject.setBase(base);
    triangleObject.setHeight(height);

    cout<<"The area of the Triangle is: "<<allShapes::Area::areaOfTriangle(triangleObject);
    cout<<""<<endl;
    cout<<""<<endl;

    EntryWindow();
   }
   void CalculateOfSquare(){
    allShapes::Sqaure squareObject;
    double side;
    cout<<"Enter side of the square"<<endl;
    cin>>side;
    squareObject.setSide(side);

    cout<<"The area of the Square is: "<<allShapes::Area::areaOfSquare(squareObject);
    cout<<""<<endl;
    cout<<""<<endl;


    EntryWindow();
   }