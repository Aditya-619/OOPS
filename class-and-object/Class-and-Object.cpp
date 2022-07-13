#include<bits/stdc++.h>
using namespace std;

// declaration of class.
class Employee{   // Employee is the name of the class.
    
    public:   // Public is an access specifier, it means we can access from anywhere in the repo.

    // properties/Attributes of the Employee class;
    int id;
    string name;
    char grade;
    int score1;
    int score2;

    int get_num(){                  // method/funtion of the class Employee and it is declared inside the class.
        return score1 + score2;
    }

    void display_details();      // This class is declared outside of the Employee class
};

/* method/funtion of the class Employee and it is declared outside of the class. If any class is declared
   outside of the class then it must also be declared in the class. */

void Employee::display_details(){              // :: (This symbol is called scope resolution)
    cout<<"Name is "<<name<<" "<<"and id is "<<id<<endl;
}

int main() {

    Employee emp1, emp2;             // emp1 and emp2 is the object of the Employee class.
    emp1.id = 21;
    emp1.name = "Aditya";
    emp1.grade = 'A';
    emp1.score1 = 10;
    emp1.score2 = 20;

    cout<<emp1.id<<" "<<emp1.name<<" "<<emp1.grade<<endl;
    cout<<emp1.get_num()<<endl;
    emp1.display_details();

    emp2.id = 13;
    emp2.name = "Simon";
    emp2.grade = 'B';
    emp2.score1 = 40;
    emp2.score2 = 2;
    cout<<emp2.id<<" "<<emp2.name<<" "<<emp2.grade<<endl;
    emp2.display_details();

    return 0;
}