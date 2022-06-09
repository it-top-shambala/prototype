#include <iostream>

#include "User.h"

using namespace std;

void Print(User user);

int main() {
    User* user1 = new User("Andrey", "Starinin", 36);
    User* user2 = new User(*user1);
    User* user3 = user2->Clone();

    Print(*user1);
    Print(*user2);
    Print(*user3);

    user1->firstName = "andrey";

    Print(*user1);
    Print(*user2);
    Print(*user3);

    return 0;
}

void Print(User user) {
    cout << user.lastName << " " << user.firstName;
    cout << ", " << user.age << endl;
}
