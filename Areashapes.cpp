#include <iostream>
#include <limits>
using namespace std;


//function declations
 void EntryWindow();
 void TriangleArea();
 void SquaregleArea();
 void RectangleArea();
 void QuitProgram();
 
  
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
            EntryWindow();
            }
            else if (choice == 1){
              SquaregleArea();
            }
            else if (choice == 2){
              RectangleArea();
            }
            else if (choice == 3){ 
              TriangleArea();
            }
            else if (choice == 4){
             cout<<"The program has Quited running"<<endl;
            }
            else{
              EntryWindow();
            }
           


         
  }
        
    

       

  