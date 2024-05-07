#include <iostream>
//#include <cstring>
#include <string>
 using namespace std;
  
   int main (){
    cout<<"Enter the A string Value"<<endl;
        string* pStringValue =  nullptr;
        pStringValue  = new string;

         // getting  string type input from the user
         string stringValue = "";
         getline(cin, stringValue);
         *pStringValue = stringValue;

    cout<<"Enter an Integer value"<<endl;
         int*  pIntegerValue = nullptr;
         pIntegerValue = new int;

         // getting input from user
         int intValue;
         cin>>intValue;
         *pIntegerValue = intValue;

         //output
         cout<<"The entered string is: "<<*pStringValue<<endl;
         cout<<"The entered integer value is: "<<*pIntegerValue<<endl;

         //Deallocating memory of pIntegerValue pinter
         delete pIntegerValue;
         pIntegerValue = nullptr;

         //Deallocating memory for pStringvalue pointer
         delete pStringValue;
         pStringValue = nullptr;

    


    return 0;
   }