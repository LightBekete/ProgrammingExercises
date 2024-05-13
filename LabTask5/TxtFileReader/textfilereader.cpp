#include <iostream>
#include <fstream>
#include<string>
using namespace std;
 //function declaration
void reverse(string );
void capitalisecondcharacter();

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
        cout<<"The number of vowels in the input.txt file is : "<<vowelscount<<endl;
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

          cout<<""<<endl;//printing a blank line

         capitalisecondcharacter();
        
        return 0;
    }

    
    void reverse(string fileDataparameter){
       cout<<"the reverse of the fileData string below: ";
        int stringlength = fileDataparameter.length(); 
      for (int i =stringlength-1; i>=0;i--){
        cout<<fileDataparameter.at(i);

      }
      cout<<""<<endl;
    }

    void capitalisecondcharacter() {
    string secondcharacter = "";
    string fileData;
    ifstream txtReader("input.txt");
    if (!txtReader.is_open()) {
        std::cerr << "Error opening file." << std::endl;
      
    }
        
    else{
       while (txtReader >> fileData) {
        for (size_t i = 0; i < fileData.length(); i++) {
        
                fileData.at(1) = toupper(fileData.at(1));
            
        }
        secondcharacter += fileData + " ";
    }
    cout << "second letter capitalized text:" << endl;
    cout<<secondcharacter <<endl;
    txtReader.close();
    }
}