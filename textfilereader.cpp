#include <iostream>
#include <fstream>
#include<string>
using namespace std;
 //function declaration
void reverse(string );

    int main(){
      int wordscount = 0;
      int vowelscount = 0;
      string fileData;
        ifstream txtReader;
        txtReader.open(("input.txt"));
        while(!txtReader.eof()){ 
          getline(txtReader,fileData,'#');
        }

       
          //couting number of vowels  
          int stringlength = fileData.length();   
        for ( int i = 0;i<stringlength; i++ ){
          if (tolower(fileData.at(i)) =='a' || tolower(fileData.at(i)) == 'e' || tolower(fileData.at(i)) == 'i' || 
              tolower(fileData.at(i)) == 'o' || tolower(fileData.at(i)) == 'u')
              {
            vowelscount++;
             }
        }
        txtReader.close();
        txtReader.open("input.txt");


        //this loop is used to calculate number of words
        while (!txtReader.eof())
        {
          txtReader>>fileData;
          if (txtReader.eof()){
            break;
          }
           wordscount++;
        }
        cout<<"The number of vowel in the input.txt file is : "<<vowelscount<<endl;
        cout<<""<<endl;
        cout<<"The number of words in the input.txt file is : "<<wordscount<<endl;

        txtReader.close();//closing the file
        txtReader.open("input.txt");//opening the file

//getting the data from the file and assigning it to fileData string variable
        while(!txtReader.eof()){
          getline(txtReader,fileData,'#');
        }
        //the reverse function calling
          reverse(fileData);
        
        return 0;
    }


    void reverse(string fileDataparameter){
        int stringlength = fileDataparameter.length(); 
      for (int i =stringlength-1; i>=0;i--){
        cout<<fileDataparameter.at(i);

      }
    }