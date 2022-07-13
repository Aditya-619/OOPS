#include <iostream>
#include <new>
using namespace std;

class Animal {		// Abstract class

	public:
		virtual void sound() = 0;		// Pure virtual function

		virtual void sleep() {
			cout << "Animal class: sleeping" << endl;
		}
};

class Dog : public Animal {		// Concrete class

	public:
		virtual void sound() {
			cout << "Dog class: bow-bow" << endl;
		}

		virtual void sleep() {
			cout << "Dog class: sleeping" << endl;
		}
};


int main() {

//	Animal a;	 // a --> Animal object	 // Error. Cannot create an object of an abstract class. 
	
	Dog dog;		// dog --> Dog object
	dog.sound();
	dog.sleep();

	Animal *animal = new Dog();		// animal --> Dog object
	animal->sound();
	animal->sleep();

	return 0;
}


// Virtual Function:
// A function marked with virtual keyword and contains = 0 after it's signature is called pure virtual function.

// Abstract class:
// A class which have atleast pure virtual function is known as abstract class.
// An abstract class also include normal data member and member functions.

// Interface:

// An abstract class which contains only pure virtual functions is known as interface.