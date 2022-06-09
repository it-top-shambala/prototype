#ifndef PROTOTYPE_USER_H
#define PROTOTYPE_USER_H

#include <string>

using namespace std;

class User {
public:
    string firstName;
    string lastName;
    int age;

    User() {}
    User(string firstName, string lastName, int age) {
        this->firstName = firstName;
        this->lastName = lastName;
        this->age = age;
    }
    User(User const &user) {
        this->firstName = user.firstName;
        this->lastName = user.lastName;
        this->age = user.age;
    }

    User* Clone() {
        return this;
    }
};


#endif //PROTOTYPE_USER_H
