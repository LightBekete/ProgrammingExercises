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

               //when days is equal between 2 and 5
        case 2:
        case 3:
        case 4:
        case 5:cout<<"Your subscription expires in "<<days<<" days. Renew now and save 10%"<<endl;
               break;

             //when days is equal between 6 and 10
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:cout<<"Your subscription will expire soon. Renew now!"<<endl;
               break;

               //when days is equal to 11
        case 11: cout<<"You have an active subscription."<<endl;
               break;
     }
    return 0;
  }