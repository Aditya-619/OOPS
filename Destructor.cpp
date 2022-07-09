#include <iostream>
#include <string>
using namespace std;

class Dog {

    public:
        string breed;
        int age;
        string color;
        string petName;

        void displayDetails();

        Dog();
        Dog(int, string, string, string);

        // Declaration of destructor inside the class. It is also declare outside in the same manner as constuctors.
        // Just like constructor, destructors are also available by default.
        // They don't have return type;
        // It executes in reverse direction i.e, from bottom to up inside the class.
        ~Dog() {
            cout << "Destructor is called and it deletes " << this->breed << " " << this->age << " "
            << this->color << " " << this->petName << endl;
        }
};

Dog :: Dog() {
    cout << "Dog object created\n";
}

Dog :: Dog(int age, string breed, string color, string petName) {
    this->age = age;
    this->breed = breed;
    this->color = color;
    this->petName = petName;
}

void Dog :: displayDetails() {
    cout << "Dog's Pet Name: " << petName << endl << "Breed: " << breed << endl << "Age: " << age << endl << "Color: " << color <<"\n\n";
}


int main() {

    Dog dog1(7, "Dalmatian", "White-black", "Jackie");
    dog1.displayDetails();

    Dog dog2(4, "Beagle", "Brown", "Pluto");
    dog2.displayDetails();

    return 0;
}