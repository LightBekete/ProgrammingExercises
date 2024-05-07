#ifndef Person_h
#define Person_H
#include <string>
using namespace std;

class Person {
public:
    Person();
    Person(string newName, float newWeight);
    ~Person();

    // Overload the add operator
    float operator+(const Person& otherPerson);
      // Overload != operator based on mFirstName
    bool operator!=(const Person& otherPerson);
      // Overload == operator based on mFirstName
    bool operator==(const Person& otherPerson);
     // Overload > and < operators based on mAge
    bool operator>(const Person& otherPerson);
    bool operator<(const Person& otherPerson);
private:
   float mWeight;
    string mFirstName;
    int mAge;
};
#endif