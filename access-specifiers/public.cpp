#include<iostream>
using namespace std;

class Circle {

    public:        // public allows you to access the data member and data function outside of the class.

    float radius;

    void get_area() {
        cout << 3.14 * radius * radius;
    }
};

int main() {


    Circle c1;
    c1.radius = 2.4;   // here you can directly access the radius and set it's value because it is public.
    c1.get_area();

    return 0;
}