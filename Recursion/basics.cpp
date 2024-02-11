#include<iostream>
#include<limits.h>
#include<vector>
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

/*
// Search in an Array
bool searchArray(int arr[], int size, int target, int index) {
    // base case
    if (index >= size) {
        return false;
    }
    // checking element at current index
    if (arr[index] == target) {
        return true;
    }
    // recursive call for next elements
    return searchArray(arr, size, target, index + 1);
}
int main() {
    int arr[] = {10,20,30,40,50};
    int size = 5;
    int index = 0;
    int target = 50;
    bool isFound = searchArray(arr, size, target, index);
    if (isFound) {
        cout << "Element found" << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;
}
*/

/*
// Minimum Number in an array
void findMin(int arr[], int size, int index, int &mini) {
    // base case: we have checked all the elements
    if (index >= size) {
        return;
    }
    // If current element is smaller than mini then update mini
    mini = min(mini, arr[index]);
    // Recursive call for remaining elements of the array
    findMin(arr, size, index+1, mini);
}
int main() {
    int arr[] = {10,20,30,40,50};
    int size = 5;
    int index = 0;
    int mini = INT_MAX;
    findMin(arr, size, index, mini);
    cout << "The minimum number in the array is : " << mini << endl;
    return 0;
}
*/


/*
// solve() -> store even numbers of array into vector
void solve(int arr[], vector<int> &v, int index, int size) {
    // base case
    if(index >= size) {
        return;
    }
    // processing
    if(arr[index] % 2 == 0) {
        // even
        v.push_back(arr[index]);
    }
    // recurssion call
    solve(arr, v, index + 1, size);
}
int main() {
    int arr[] = {10,11,12,13,14};
    int size = 5;
    int index = 0;
    vector<int> v;
    solve(arr, v, index, size);
    for(int i: v) {
        cout << i << " ";
    }
    return 0;
}
*/

/*
// double each element present in an array using recurssion
void doubleIt(int arr[], int index, int size) {
    // base case
    if(index >= size) {
        return;
    }
    // process the data
    arr[index] *= 2;
    // recursion call
    doubleIt(arr, index + 1, size);
}

int main() {
    int arr[] = {10,20,30,40,50};
    int size = 5;
    int index = 0;
    // calling function to double elements of array
    doubleIt(arr, index, size);
    // printing the resultant array
    for(int i : arr) {
        cout << i << " ";
    }
    return 0;
}
*/

/*
// Maximum Number in an array
void findMax(int arr[], int size, int index, int &maxi) {
    // base case: we have checked all the elements
    if (index >= size) {
        return;
    }
    // If current element is smaller than mini then update mini
    maxi = max(maxi, arr[index]);
    // Recursive call for remaining elements of the array
    findMax(arr, size, index+1, maxi);
}
int main() {
    int arr[] = {10,20,30,40,50};
    int size = 5;
    int index = 0;
    int maxi = INT_MIN;
    findMax(arr, size, index, maxi);
    cout << "The maximum number in the array is : " << maxi << endl;
    return 0;
}
*/

/*
// Search in an Array if found return valid index if not found return -1
int searchArray(int arr[], int size, int target, int index) {
    // base case
    if (index >= size) {
        return -1;
    }
    // checking element at current index
    if (arr[index] == target) {
        return index;
    }
    // recursive call for next elements
    return searchArray(arr, size, target, index + 1);
}
int main() {
    int arr[] = {10,20,30,40,50};
    int size = 5;
    int index = 0;
    int target = 30;
    cout << searchArray(arr, size, target, index);
    return 0;
}
*/

/*
// Print index of all occurence of target in array using recursion
void findAllOccurrences(int arr[], int size, int target, int index) {
    // Base Case: If the first element is the target then add its index to the list.
    if (index >= size) {
        return;
    }
    if(target == arr[index]) {
        cout << index << " ";
    }
    findAllOccurrences(arr, size, target, index+1);
}
int main() {
    int arr[] = {10,20,10,10,30,40};
    int size = 6;
    int index = 0;
    int target = 10;
    findAllOccurrences(arr, size, target, index);
    return 0;
}
*/

/*
// print digits of an integer using recursion
void printDigits(int n, vector<int> &ans) {
    // base case: when n becomes 0
    if (n == 0) {
        return;
    }
    // Recursively call printDigits for remaining number
    printDigits(n / 10, ans);
    // print the last digit
    ans.push_back(n%10);
}
int main() {
    int num = 4215;
    vector<int> ans;
    printDigits(num, ans);
    for(int i : ans) {
        cout << i << " ";
    }
    return 0;
}
*/

/*
// print integer from digits in vector using recursion
void printIntegerFromVector(vector<int>& v) {    
    // Base Case: If the Vector is empty then there are no elements left to add
    if (v.empty()) {
        return;
    }
    // Add the first element to the result
    int digit = v[0];
    // Remove the first element from the list
    v.erase(v.begin());
    cout << digit;
    // Recursive Call - Construct the rest of the number and place it before the current number
    printIntegerFromVector(v);
}
int main(){
    vector<int> V = {4,2,1,7};
    cout<<"The Number is: ";
    printIntegerFromVector(V);
    return 0;
}
*/