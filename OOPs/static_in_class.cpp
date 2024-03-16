#include<iostream>
using namespace std;

class abc {
public:
    static int x, y; // static data members

    static void print() // static member function
    {
        cout << x << " " << y << endl;
    }
};

int abc::x;
int abc::y;

int main() {
    abc obj1;
    obj1.x = 1;
    obj1.y = 2;
    abc::print();
    abc obj2;
    obj2.x = 10;
    obj2.y = 20;
    abc::print();
    abc::print();
    return 0;
}