#include<iostream>
using namespace std;

class Circle {

    // Here no one knows(except owner of the program) that an attribute radius is exist inside the class
    // because it is private. This is knows as Data hiding.
    private:

    float radius;   // access only inside the class.

    public:

    void set_radius(int radius) {
        this->radius = radius;
    }

    double get_area() {
        return 3.14 * radius * radius;
    }
};

int main() {


    Circle c1;
    // c1.radius = 2.4;    here you cannot directly access the radius and set it's value because it is private.

    // instead you can use the function set_radius to set the radius.
    c1.set_radius(2.3);
    cout << c1.get_area();

    return 0;
}

// by default all the members/attributes inside the class are private.