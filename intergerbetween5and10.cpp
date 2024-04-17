#include <iostream>
#include <limits>
using namespace std;


int main() {
    int value;
    bool loopcondition = true;

    while (loopcondition) {
        cout << "Enter an integer value between 5 and 10: "<<endl;
        cin >> value;
        if (!value) { // Check if input is not an integer
            cout << "Sorry, you entered an invalid input. Please try again." <<endl;
            cin.clear(); // this is used to Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //  this ignores invalid input and clears the buffer
       } 
         else if (value < 5 || value > 10) { // this Checks if input is outside the range
            cout << "You entered "<<value<<" .Please enter a number between 5 and 10." <<endl;
        } 
       else {
            loopcondition = false; // Exit the loop if input is valid and within the range
        }
    }

    std::cout << "Your input value  (" << value << ") has been accepted." <<endl;

    return 0;
}


    