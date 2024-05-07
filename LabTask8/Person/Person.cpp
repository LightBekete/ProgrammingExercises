#include "Person.h"
#include <iostream>

Person::Person()  {
    mWeight = 0;
    mFirstName = ""; 
    mAge = 0;
}

Person::Person(string newName, float newWeight)  {
    mWeight = newWeight;
    mFirstName = newName;
    mAge = 0;
}

Person::~Person() {}

float Person::operator+(const Person& otherPerson) {
    return mWeight + otherPerson.mWeight;
}
bool Person::operator!=(const Person& otherPerson) {
    return mFirstName != otherPerson.mFirstName;
}
bool Person::operator==(const Person& otherPerson) {
    return mFirstName == otherPerson.mFirstName;
}