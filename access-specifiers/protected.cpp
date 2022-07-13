#include<iostream>
using namespace std;

class Person {

    protected:

    string phone_number;

    public:

    string Full_name;

    void set_phoneNum(string phone_number) {
        this->phone_number = phone_number;
    }

    void displayPerson_details() {
        cout << "Name: " << Full_name << "\n" << "Phone Number: " << phone_number << endl;
    }
    
};

class Student:public Person {

    public:

    int id;

    void displayStudent_details() {
        cout << "Id: " << id << "\n" << "Name: " << Full_name << "\n" << "Phone Number: " << phone_number << endl; 
    }
};

int main() {

    Person p1;
    p1.Full_name = "Aditya Ranjan";
    // string P_no = Person.phone_number;   protected: cannot be accessed, through error.
    p1.set_phoneNum("850233236");
    p1.displayPerson_details();

    Student s1;
    s1.Full_name = "Steve Smith";
    // string P_no = Student.phone_number;   protected: cannot be accessed, through error.
    s1.set_phoneNum("3462349723");
    s1.displayStudent_details();
    

    return 0;
}


// Protectced allows only chid class to access it's data member and member functions.