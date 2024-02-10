#include<iostream>
using namespace std;

/*
// Factorial of N
int factorial(int n) {
    // base case
    if(n == 1 || n == 0) {
        return 1;
    }
    // recursive call
    int ans = n * factorial(n - 1);
    return ans;
}

int main() {
    cout << factorial(5);
    return 0;
}
*/

/*
// Counting from N to 1
void print(int n) {
    // base case
    if(n == 1) {
        cout << 1 << " ";
        return ;
    }
    // processing
    cout << n << " ";
    // recursion call
    print(n - 1);
}
int main() {
    print(5);
    return 0;
}
*/

/*
// Solve 2^N
int pow(int n) {
    if(n == 0) {
        return 1;
    }
    int ans = 2 * pow(n-1);
    return ans;
}

int main() {
    cout << pow(10) << endl;
}
*/

/*
// Fibonacci Series
int fib(int n) {
    // base case
    if(n == 0 || n == 1) {
        return n;
    }
    int ans = fib(n - 1) + fib(n - 2);
    return ans;
}

int main() {
    cout << fib(7);
    return 0;
}
*/

/*
// Binary Search
int BS(int a[], int k, int start, int end) {
    if(start > end) {
        return -1;
    }
    int mid = start + (end - start) / 2;
    if(a[mid] == k) {
        return mid;
    } else if(a[mid] < k) {
        return BS(a, k, mid+1, end);
    } else {
        return BS(a, k, start, mid-1);
    }
}

int main(){
    int arr[] = {-4, 5, 6, 8, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 6;
    int result = BS(arr, key, 0, n-1);
    if(result == -1){
        cout << "Element is not present in array";
    }else{
        cout << "Element is present at index " << result;
    }
    return 0;
}
*/

/*
// Print Array using Recursion
void printArray(int *arr, int size, int index) {
    // base case
    if(index >= size) {
        return;
    }
    // processing
    cout << arr[index] << " ";
    // recursive call
    printArray(arr, size, index+1);
}

int main() {
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    printArray(arr, n, 0);
    return 0;
}
*/


// Search in an Array
