#include <iostream>
#include <cstdlib>
#include <ctime>
 using namespace std;
  
  int main(){
    //array declaration
    int arraysize = 8;
    string codeArray[arraysize];
    codeArray[0] = "B123";
    codeArray[1] = "C234";
    codeArray[2] = "A345";
    codeArray[3] = "C15";
    codeArray[4] = "B177";
    codeArray[5] = "G3003";
    codeArray[6] = "C235";
    codeArray[7] = "B179";

    //printing string elements that have initial letter B using a for loop
    for (int i = 0; i < arraysize; i++){
        if (codeArray[i].at(0) == 'B'){
            cout<<codeArray[i]<<endl;
        }
    }


    return 0;
  }