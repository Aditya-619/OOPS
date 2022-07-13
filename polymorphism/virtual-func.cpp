#include <iostream>
#include <new>
using namespace std;

class Animals{
    public:

    virtual void sound() {
        cout << "Animals class: making sound" << endl;
    }

    virtual void sleep() {
        cout << "Animals class: sleeping" << endl;
    }

};

class Dog:public Animals{
    public:

    virtual void sound() {
        cout << "Dog class: making sound" << endl;
    }

    virtual void sleep() {
        cout << "Dog class: sleeping" << endl;
    }

};

int main() {

    Dog d;
    d.sound();
    d.sleep();

    Animals *animals  = new Dog();
    animals->sound();
    animals->sleep();

    // both give same output.
    // It's not necessary to use virtual function to only overriding.

    return 0;
}
