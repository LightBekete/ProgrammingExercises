#include <iostream>
#include <limits>
using namespace std;


//function declations
 void EntryWindow();
 void TriangleArea();
 void SquareArea();
 void RectangleArea();
 
 
  
  int main(){
    EntryWindow();

    return 0;
  }
  void EntryWindow(){
    cout<<"Please Select the area of the shape to calculate\n"
        <<"1. Square\n"
        <<"2. Rectangle\n"
        <<"3. Triangle\n"
        <<"4. Quit Program\n";

           int choice;
    
        cin >> choice;
           if (!choice) { 
          // Check if input is not an integer
            cin.clear(); // this is used to Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //  this ignores invalid input and clears the buffer
            cout<<"Invalid input. Please try again."<<endl;
            cout<<""<<endl;
            EntryWindow();
            }
            else if (choice == 1){
             SquareArea();
            }
            else if (choice == 2){
              RectangleArea();
            }
            else if (choice == 3){ 
              TriangleArea();
            }
            else if (choice == 4){
             cout<<"The program has Quitted running"<<endl;
             cout<<""<<endl;
             exit(1);
            }
            else{
               cout<<"Invalid input. Please try again."<<endl;
                cout<<""<<endl;
              EntryWindow();
            }
           


         
  }
   //function definitions
   void SquareArea() {
    cout<<"Enter length and height of the Square"<<endl;
        double length;
        cin>>length;
         double height;
        cin>>height;

          if (!(length) || !(height)) { 
          // Check if input is not an integer
            cin.clear(); // this is used to Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //  this ignores invalid input and clears the buffer
            cout<<" Invalid inputs, Try again."<<endl;
             cout<<""<<endl;
            SquareArea();
           }
           
            double area ;
            area =  length * height;
           cout<<"The Area of the Square is "<<area<<endl;
           cout<<""<<endl;
           EntryWindow();
   }
   void RectangleArea(){
      cout<<"Enter length and height of the Rectangle"<<endl;
        double length;
        cin>>length;
         double height;
        cin>>height;

          if (!(length) || !(height)) { 
          // Check if input is not an integer
            cin.clear(); // this is used to Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //  this ignores invalid input and clears the buffer
            cout<<" Invalid inputs, Try again."<<endl;
             cout<<""<<endl;
            RectangleArea();
           }
           
            double area ;
            area =  length * height;
           cout<<"The Area of the Rectangle is "<<area<<endl;
           cout<<""<<endl;
           EntryWindow();
   }
   void TriangleArea(){
     cout<<"Enter base and height of the Triangle"<<endl;
        double base;
        cin>>base;
         double height;
        cin>>height;

          if (!(base) || !(height)) { 
          // Check if input is not an integer
            cin.clear(); // this is used to Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //  this ignores invalid input and clears the buffer
            cout<<" Invalid inputs, Try again."<<endl;
             cout<<""<<endl;
            TriangleArea();
           }
           const double half =0.5;
           
            double area ;
            area =  half * base * height;
           cout<<"The Area of the Triangle is "<<area<<endl;
           cout<<""<<endl;
           EntryWindow();
   }
        
    

       

  