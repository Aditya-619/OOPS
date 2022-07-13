#include<bits/stdc++.h>
using namespace std;

class Dog {
    public:

    string breed;
    int age;
    string color;
    string petName;

    // Declaration of parameterized constructor inside the class. It is declared outside the class
    // in the same manner as in default constructor.
    Dog(string breed, int age, string color, string petName) {

        // this keyword is used when both the parameter and data member of the same name. By using this keyword
        // compiler will not confuse to identify which is data member and which is parameter.

        // If both have not similar name then no need to use this keyword.
        this->breed = breed;
        this->age = age;
        this->color = color;
        this->petName = petName;
    }

    void displayDetails();

    Dog();
};

Dog :: Dog() {
    cout << "Dog object created\n";
}

void Dog :: displayDetails() {
    cout << "Dog's Pet Name: " << petName << endl << "Breed: " << breed << endl << "Age: " << age << endl << "Color: " << color <<"\n\n";
}

int main() {

    Dog dog1;
    dog1.breed = "Dalmatian";
    dog1.age = 7;
    dog1.color = "White-black";
    dog1.petName = "Jackie";
    dog1.displayDetails();

    // Object for parameterized constructor.
    Dog dog2("Beagle", 8, "Brown", "Jack");
    dog2.displayDetails();


    return 0;
}