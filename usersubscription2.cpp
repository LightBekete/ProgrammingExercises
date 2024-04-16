#include <iostream>
#include <cstdlib>
#include <ctime>
 using namespace std;
   
   int main(){
    srand(time(0)) ;  //intialising randon seed
     int days = rand() % 12;

        if (days == 0){
        cout<<"Your subscription has expired"<<endl;
       }
        else if(days == 1){
            cout<<"Your subscription ends within a day. Renew now and save 20% !"<<endl;
        }

        else if (days  <= 5){
           cout<<"Your subscription expires in "<<days<<" days. Renew now and save 10%"<<endl;
        }

        else if (days <= 10){
            cout<<"Your subscription will expire soon. Renew now!"<<endl;
        }
    return 0;
   }