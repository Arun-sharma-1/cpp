#include <iostream>
using namespace std;

// declare a class
class Wall {
   private:
    double length;
    double height;

   public:
    // create parameterized constructor
    Wall(double len, double hgt) {
        // initialize private variables
        length = len;
        height = hgt;
    }

    double calculateArea() {
        double p= length * height;
        cout<<p<<endl;
    }
};

int main() {
    // create object and initialize data members
    Wall wall1(10.5, 8.6);
    Wall wall2(8.5, 6.3);
    wall1.calculateArea();
    
    wall2.calculateArea();
//
//    cout << "Area of Wall 1: " << wall1.calculateArea() << endl;
//    cout << "Area of Wall 2: " << wall2.calculateArea() << endl;

    return 0;
}
