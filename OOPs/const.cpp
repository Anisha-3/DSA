#include<iostream>
using namespace std;

class abc{
    mutable int x;
    int *y;
    int z; 

public:
    
    abc(int _x, int _y, int _z = 0) // default argument 
    {
        x = _x;
        y = new int(_y);
        z = _z;
    }
    int getX() const {
        x = 10;
        return x;
    }
    void setX(int _val) {
        x = _val;
    }
    int getY() const {
        return *y;
    }
    void setY(int _val) {
        *y = _val;
    }
    int getZ() const {
        return z;
    }
};

void printABC(const abc &a) {
    cout << a.getX() << " " << a.getY() << " " << a.getZ() << endl;
}

int main() {
    abc a(1, 2, 3);
    printABC(a);
    return 0;
}

int main2() {
    /*
    const int x = 5;  // x is constant.
    // initialization can be done but we can't re-assign a value
    // x = 10;  
    cout << x << endl;
    */

   /*
    // const With Pointers
    const int *a = new int(2);  // CONST data, and NON-CONST pointer i.e *a can't be modified but we can modify a.
    // int const *a = new int(2); // same as line no. 13. 
    // if we write const before * then content will be constant
    cout << *a << endl;
    // *a = 20; // can't change the content of pointer.
    // cout << *a << endl;
    int b = 20;
    a = &b;  // pointer itself can be reassigned.
    cout << *a << endl;
    */

    /*
    // CONST Pointer, but NON-CONST data.
    int *const a = new int(2);
    *a = 20; // it'll work
    cout << *a << endl;
    int b = 50;
    // a = &b; // it'll not work coz pointer is const
    */

    /*
    // CONST Pointer, CONST data
    const int *const a = new int(3);
    cout << *a << endl;
    // *a = 30; // won't work because data is const
    int b = 100;
    // a = &b; // won't work because pointer is const
    */

    return 0;
}