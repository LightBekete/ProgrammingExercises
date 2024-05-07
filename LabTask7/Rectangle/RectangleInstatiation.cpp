#include <iostream>
#include "Rectangle.h"
using namespace std;
   
   int main (){
    float length;
    float width;

   //creating a rectangle object
    Rectangle rectangle1;
    cout<<"Enter a float Length value of the rectangle"<<endl;
      cin>>length;
    cout<<"Enter a float width value of the rectangle"<<endl;
    cin>>width;

    rectangle1.setRectangleLength(length);
    rectangle1.setRectangleWidth(width);
    cout<<"The area fo the rectangle is: "<<rectangle1.areaRectangle();
    


    return 0;
   }
   
 