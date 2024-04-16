#include <iostream>
#include <cstdlib>
#include <ctime>
 using namespace std;

     int main(){
        srand(time(0)) ;  //intialising randon seed

       int days = rand() % 11;
       if (days == 0){
        cout<<"Your subscription has expired"<<endl;
       }
       if (days == 1){
        cout<<"Your subscription ends within a day. Renew now and save 20% !"<<endl;
       }

       if (days <= 5){
            cout<<"Your subscription expires in "<<days<<" days. Renew now and save 10%"<<endl;
          }
          
         
         
         
        return 0;
     }