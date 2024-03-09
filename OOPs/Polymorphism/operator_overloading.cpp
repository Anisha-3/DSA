#include<iostream>
using namespace std;

// Operator Overloading

class Vector {
    int x, y;
public: 

    Vector(int x, int y) : x(x), y(y) {} 

    // Operator Overloading
    void operator+(const Vector &src) {
        // this would point to v1
        // src should be ref to v2
        this->x += src.x;
        this->y += src.y;
    }

    void operator-(const Vector &src) {
        // this would point to v2
        // src should be ref to v1
        this->x -= src.x;
        this->y -= src.y;
    }

    void operator++() {
        this->x++;
        this->y++;
    }

    void display() {
        cout << "x: " << x << " " << "y: " << y << endl;
    }
    
};


int main() {
    Vector v1(2, 3);
    Vector  v2(4, 5);

    // v1 + v2;
    // addition answer should be stored in v1
    // v1.display();
    
    // v2 - v1;
    // subtraction answer should also store in v2
    // v2.display();

    ++v1;
    v1.display();
    return 0;
}