#include <iostream>
#include "Rectangle.h"
using namespace std;
   
   int main (){
    float length;
    float width;

   //creating a rectangle object
  
    cout<<"Enter a float Length value of the rectangle"<<endl;
      cin>>length;
    cout<<"Enter a float width value of the rectangle"<<endl;
    cin>>width;
      Rectangle rectangle1(length , width);

    
    cout<<"The area fo the rectangle is: "<<rectangle1.areaRectangle();
    


    return 0;
   }
   
 