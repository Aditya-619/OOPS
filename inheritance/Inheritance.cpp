#include <iostream>
#include <string>
using namespace std;

class Animals {

    public:

    int age;
    string color;

    void run() {
        cout << "Running" << endl;
    }
};

// Class Dog inherits some properties from Animals class. we can also use other access specifiers.
class Dog:public Animals
{

public:
    // The following commented code (age, color, void run) is used in all the animals so in all different animal class
    // they inherit it from base class which is Animal class above.

    // int age;
    // string color;
    string petName;

    void bark()
    {
        cout << "Barking" << endl;
    }

    // void run()
    // {
    //     cout << "Running" << endl;
    // }
};


class Lion:public Animals
{

public:
    // The following commented code (age, color, void run) is used in all the animals so in all different animal class
    // they inherit it from base class which is Animal class above.

    // int age;
    // string color;

    void roar()
    {
        cout << "Roaring" << endl;
    }

    // void run()
    // {
    //     cout << "Running" << endl;
    // }
};

int main() {

    Dog dog;
    dog.age = 9;
    dog.color = "White";
    dog.petName = "Lucky";
    dog.bark();
    dog.run();

    Lion leo;
    leo.age = 12;
    leo.color = "Yellow";
    leo.roar();
    leo.run();


    return 0;
}

// The capability of a class to inherit the properties or characteristics of another class is called inheritanc.
