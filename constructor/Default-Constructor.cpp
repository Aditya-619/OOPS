#include<bits/stdc++.h>
using namespace std;

class Employee {
    public:

    int id;
    string first_name;
    string last_name;

    // This constructor is declared outside of the class.
    // Employee();

    string get_fullname() {
        return first_name + " " + last_name;
    }

    // Declaration of a default constructor inside the class.
    Employee() {
        cout << "This is default constructor" << endl;
    }

};

// Employee :: Employee() {
//     cout<< "This constructor is declared outside the class." << endl;
// }

int main() {

    Employee emp1;
    emp1.id = 1;
    emp1.first_name = "James";
    emp1.last_name = "Anderson";

    cout << emp1.get_fullname() << endl;

    return 0;
}

// A consturctor is a method of the class which is used to create objects.
// They are also used to initilize the value of the attributes.
// It is declared with the same name of the class. It has no return type (int, void etc.).
// It is declared inside the class as well as outside the class.
// It is of three types:- 1) Default constructor(no parameter) 2) Parameterized constructor 3) Copy constructor