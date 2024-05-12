#include <iostream> 
using namespace std; 
int main() { 
int numberOfElements 
int* dynamicArray 
= 
= 
0; nullptr; 
cout << "How many numbers would you like to type? "; 
cin >> numberOfElements; 
dynamicArray = new int[numberOfElements]; 
if (dynamicArray 
} 
else { 
== 
nullptr) { 
cout << "Error: memory could not be allocated"; 
for (int i = 0; i < numberOfElements; i++) { 
cout << "Enter number: "; cin >> dynamicArray[i]; 
} 
cout << "You have entered: 
19 
for (int j 
= 
0; j < numberOfElements; j++) { 
cout << dynamicArray[j] << "; 
11 
> 
} 
delete[] dynamicArray; 
} 
return 0; 
}
