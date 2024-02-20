#include<iostream>
using namespace std;

/*
Time complexity
Best Case: O(nlogn)
Avg Case: O(nlogn)
Worst Case: O(nlogn)
*/

void merge(int arr[], int s, int e) {
    int mid = (s + e) / 2;
    int lenLeft = mid - s + 1;
    int lenRight = e - mid;
    // create left and right array
    int *left = new int[lenLeft];
    int *right = new int[lenRight];

    // copy values from original arrays to left array
    int k = s;  // k -> Starting index of left array values in original array
    for(int i = 0; i < lenLeft; i++) {
        left[i] = arr[k];
        k++;
    }
    // copy values from original arrays to right array
    k = mid + 1;  // k -> Starting index of right array values in original array
    for(int i = 0; i < lenRight; i++) {
        right[i] = arr[k];
        k++;
    }

    // actual merge logic here
    // left array is already sorted
    // right array is already sorted
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = s;
    while(leftIndex < lenLeft && rightIndex < lenRight) {
        if(left[leftIndex] <= right[rightIndex]) {
            arr[mainArrayIndex] = left[leftIndex];
            leftIndex++;
        } else {
            arr[mainArrayIndex] = right[rightIndex];
            rightIndex++;
        }
        mainArrayIndex++;
    }

    // If any element was left in left or right array then append it to the end of array
    while(leftIndex < lenLeft) {
        arr[mainArrayIndex] = left[leftIndex];
        leftIndex++;
        mainArrayIndex++;
    }
    while(rightIndex < lenRight) {
        arr[mainArrayIndex] = right[rightIndex];
        rightIndex++;
        mainArrayIndex++;
    }

    delete[] left;
    delete[] right;
}

void mergeSort(int arr[], int s, int e) {
    // base case
    if(s >= e) return;

    int mid = (s + e) / 2;
    // recursive call for left array
    mergeSort(arr, s, mid);
    // recursive call for right array
    mergeSort(arr, mid+1, e);
    // merge 2 sorted arrays
    merge(arr, s, e);
}

int main() {
    int arr[] = {2,1,6,9,4,5};
    int size = 6;
    int s = 0;
    int e = size - 1;
    cout << "Before Merge Sort: " << endl;
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    } cout << endl;
    mergeSort(arr, s, e);
    cout << "After Merge Sort: " << endl;
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    } cout << endl;
    return 0;
}