#include <iostream>
#include <cstdlib>
#include <limits>
using namespace std;
 
 int main (){
    cout<<"Enter the dimensions of an Array (eg.Row[], Column[])"<<endl;
    cout<<"Enter the Row[] number between 1 and 3 only"<<endl;
    int numberOfRows;
    cin>>numberOfRows;
    
    if(!numberOfRows || (  numberOfRows <= 0 || numberOfRows > 3)){
        cout<<" wrong input. try again."<<endl;
    }
    while(!numberOfRows || (  numberOfRows <= 0 || numberOfRows > 3)){
          cin>>numberOfRows;
        if (!numberOfRows){
             cin.clear();
             cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout<<"you have entereed an invalid input"<<endl;
        }
        else if ( numberOfRows <=0 || numberOfRows > 3){
            cout<<"Enter a value between 1 and 3"<<endl;
        }
       
    }

    //getting number of columns of the array
      cout<<"Enter the column[] number between 1 and 3 only"<<endl;
        int  numberOfColums;
        cin>>numberOfColums;

        if(!numberOfColums || (  numberOfColums <= 0 || numberOfColums > 3)){
        cout<<" wrong input. try again."<<endl;
    }
    while(!numberOfColums || (  numberOfColums <=0 || numberOfColums > 3)){
          cin>>numberOfColums;
        if (!numberOfColums){
             cin.clear();
             cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout<<"you have entereed an invalid input"<<endl;
        }
        else if ( numberOfColums <=0 || numberOfColums > 3){
            cout<<"Enter a value between 1 and 3"<<endl;
        }
       
    }

     // setting the number of the rows of the array
    double** doubleArray =new double*[numberOfRows];

     // setting number of columns;
     for (int i = 0; i < numberOfRows; i++ ){
        doubleArray[i] = new double[numberOfColums];
     }

     // randon initialisation of the doubleArray
     srand(time(0));
     for (int i = 0; i < numberOfRows; i++){
        for (int j = 0;j < numberOfColums; j++){
            doubleArray[i][j] = ((rand()%1500)/8);
        }
     }

     //printi the doubleArray Elements
     for (int i = 0; i < numberOfRows; i++){
        for (int j = 0; j < numberOfColums; j++){
            cout<<doubleArray[i][j]<<" ";
        }
         cout<<""<<endl;
     }
     // Deallocating memory of the doubleArray
     for(int i = 0; i < numberOfRows; i++){
        delete [] doubleArray[i];
     }
     delete [] doubleArray;
     doubleArray =nullptr;

    


    return 0;
 }