#include <iostream>
#include <limits>
using namespace std;
 
 int main (){
    cout<<"Enter the dimensions of an Array (eg.Row[], Column[])"<<endl;
    cout<<"Enter the Row[] number between 1 and 3 only"<<endl;
    int numberOfRows;
    cin>>numberOfRows;
    while(!numberOfRows || (  numberOfRows < 1 || numberOfRows > 3)){
          cin>>numberOfRows;
        if (!numberOfRows){
             cin.clear();
             cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout<<"you have entereed an invalid input"<<endl;
        }
        else if ( numberOfRows < 1 || numberOfRows > 3){
            cout<<"Enter a value between 1 and 3"<<endl;
        }
       
    }

    //getting number of columns of the array
        int  numberOfColums;
        cin>>numberOfColums;
    while(!numberOfColums || (  numberOfColums < 1 || numberOfColums > 3)){
          cin>>numberOfColums;
        if (!numberOfColums){
             cin.clear();
             cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout<<"you have entereed an invalid input"<<endl;
        }
        else if ( numberOfColums < 1 || numberOfColums > 3){
            cout<<"Enter a value between 1 and 3"<<endl;
        }
       
    }

     // setting the number of the rows of the array
    double** doubleArray =new double*[numberOfRows];

     // setting number of columns;
     for (int i = 0; i < numberOfRows; i++ ){
        doubleArray[i] = new double[numberOfColums];
     }

    


    return 0;
 }