#include "Person.h"
#include <iostream>

int main() {
    Person Jane = Person("Jane", 60.0f);
    Person John = Person("John", 75.0f);

    float totalWeight = Jane + John;
    cout << "Total weight: " << totalWeight << endl;
      if (Jane != John) {
        cout << "This is NOT the same person" << endl;
    }
      if (Jane == John) {
        cout << "This is the same person" << endl;
    }
        if (Jane > John) {
        cout << "Jane is younger than John" << endl;
    }

    if (John < Jane) {
        cout << "John is older than Jane" << endl;
    }
    int johnAge = John;
    cout<<"John`s Age: "<<johnAge<<endl;
    return 0;
}