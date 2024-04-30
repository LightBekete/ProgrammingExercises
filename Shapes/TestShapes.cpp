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
        byte choice;
        cin>>choice;
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


    EntryWindow();
   }
   void CalculateOfTriangle(){
    allShapes::Triangle triangleObject;

    EntryWindow();
   }
   void CalculateOfSquare(){
    allShapes::Sqaure squareObject;


    EntryWindow();
   }