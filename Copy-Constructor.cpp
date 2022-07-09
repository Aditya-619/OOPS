#include<bits/stdc++.h>
using namespace std;

class Employee {
    public:

    int id;
    string first_name;
    string last_name;

    void display_details(); 

};

void Employee :: display_details() {
    cout << id << " " << first_name << " " << last_name << endl;
}

int main() {

    Employee emp1;
    emp1.id = 1;
    emp1.first_name = "James";
    emp1.last_name = "Anderson";
    emp1.display_details();

    // Copy constructor.
    Employee emp2 = emp1;
    emp2.id = 2;
    emp2.display_details();

    return 0;
}