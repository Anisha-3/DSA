#include<iostream>
using namespace std;

int x = 2;  // Global Variable

void fun() {
    int x = 60;
    cout << x << endl;
    ::x = 40;
    cout << ::x << endl;
}

int main() {
    x = 4; // global x
    int x = 20;  // Local variable to main() function.
    cout << x << endl;
    cout << ::x  << endl;   // To access the global variable 'x' we use "::" before its name.

    {
        int x = 50;
        cout << x << endl;
        cout << ::x << endl;
    }
    fun();
    return 0;
}