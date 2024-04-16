#include <iostream>
#include <cstdlib>
#include <ctime>
 using namespace std;
  
  int main(){
    srand(time(0)) ;  //intialising randon seed
     int days = rand() % 12;

     switch(days){
        case 0:cout<<"Your subscription has expired"<<endl;
               break;
        case 1: cout<<"Your subscription ends within a day. Renew now and save 20% !"<<endl;
               break;
        case 2:
        case 3:
        case 4:
        case 5:cout<<"Your subscription expires in "<<days<<" days. Renew now and save 10%"<<endl;
               break;
        /*case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:*/
     }
    return 0;
  }