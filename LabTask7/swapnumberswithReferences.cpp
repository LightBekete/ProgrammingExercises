#include <iostream>
using namespace std;
void swapNumbers(int& newVArA , int& newVarB);

   int main (){
     int varA = 25;
     int varB = 100;

     int& refVarA = varA;
     int& refVArB = varB;
       cout<<"VarA before swap "<<varA<<endl;
       cout<<"VarB before swap "<<varB<<endl;
       swapNumbers( refVarA , refVArB);

      cout<<"VarA after swap "<<varA<<endl;
      cout<<"VarB after swap "<<varB<<endl;


    return 0;
   }
   void swapNumbers(int& newVarA , int& newVarB){
    int tempVar = newVarA;
    newVarA = newVarB;
    newVarB =tempVar;
   }