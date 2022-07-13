#include <iostream>
using namespace std;

class Animals{
    public:

    void sound() {
        cout << "Animals class: making sound" << endl;
    }

    void sleep() {
        cout << "Animals class: sleeping" << endl;
    }

};

class Dog:public Animals{
    public:

    void sound() {
        cout << "Dog class: making sound" << endl;
    }

    void sleep() {
        cout << "Dog class: sleeping" << endl;
    }

};

int main() {

    Animals a;
    a.sound();
    a.sleep();

    Dog d;
    d.sound();
    d.sleep();

    return 0;
}

// Function overridin is a feature of oops that allows us to override a function of parent class to child class.
// It is also called method overriding.
// Override function -> same name, same number of parameters, same/different code inside function.