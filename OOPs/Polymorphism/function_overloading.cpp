#include<iostream>
using namespace std;

// Funtion Overloading

int add(int a, int b) {
    return a + b;
}

double add(double a, double b){
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    cout << add(1, 5) << endl;
    cout << add(5.6, 4.5) << endl;
    cout << add(1, 2, 3) << endl;
    return 0;
}