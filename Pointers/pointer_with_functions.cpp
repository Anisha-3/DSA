#include<iostream>
using namespace std;

void solve(int *arr, int size) {
    // cout << "Size of an array inside func: " << sizeof(arr) << endl;

    // cout << "Inside solve -> arr: " << arr << endl;
    // cout << "Inside solve -> &arr: " << &arr << endl;

    *arr = *arr + 1;
}

int main() {
    int arr[] = {10,20,30,40};
    // cout << "Size of an array: " << sizeof(arr) << endl;

    // cout << "Inside main -> arr: " << arr << endl;
    // cout << "Inside main -> &arr: " << &arr << endl;

    solve(arr, 4);

    for(int i = 0; i < 4; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}