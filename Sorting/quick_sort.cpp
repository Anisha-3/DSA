#include<iostream>
#include<vector>
using namespace std;

/*
Time complexity
Best Case: O(nlogn)
Avg Case: O(nlogn)
Worst Case: O(n^2)
*/

void quickSort(int a[], int start, int end){
    if(start >= end) return;
    int pivot = end;
    int i = start - 1;
    int j = start;
    while(j < pivot) {
        if(a[j] < a[pivot]) {
            ++i;
            swap(a[i], a[j]);
        }
        ++j;
    }
    ++i;
    // i is the right position for the pivot element.
    swap(a[i], a[pivot]);
    quickSort(a, start, i-1);
    quickSort(a, i+1, end);        
}

int main() {
    int arr[] = {2,1,6,9,4,5};
    int size = 6;
    int s = 0;
    int e = size - 1;
    cout << "Before Quick Sort: " << endl;
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    } cout << endl;
    quickSort(arr, s, e);
    cout << "After Quick Sort: " << endl;
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    } cout << endl;
    return 0;
}