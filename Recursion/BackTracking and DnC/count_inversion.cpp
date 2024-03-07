#include<iostream>
#include<vector>
using namespace std;
/*
In an array, arr, the elements at indices i and j (where i < j) form an inversion if arr[i] > arr[j]. 
In other words, inverted elements arr[i] and arr[j] are considered to be "out of order". 
To correct an inversion, we can swap adjacent elements.
*/

// Method - 1
// T.C - O(N^2)  S.C - O(1)
int countInversions(vector<int> arr) {
    int count = 0;
    for(int i = 0; i < arr.size(); i++) {
        for(int j = i + 1; j < arr.size(); j++) {
            if(arr[i] > arr[j]) {
                count++;
            }
        }
    }
    return count;
}

// Method - 2
// T.C - O(NlogN)  S.C - O(N)
long merge(vector<int>& arr, vector<int>& temp, int start, int mid, int end) {
    int i = start, j = mid + 1, k = start;
    long c = 0;
    while(i <= mid && j <= end) {
        if(arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        }
        else {  // arr[i] > arr[j] - Inversion Count Case
            temp[k++] = arr[j++];
            c += mid - i + 1;
        }
    }
    while(i <= mid) {
        temp[k++] = arr[i++];
    }
    while(j <= end) {
        temp[k++] = arr[j++];
    }
    while(start <= end) {
        arr[start] = temp[start];
        start++;
    }
    return c;
}
 
 
long mergeSort(vector<int>& arr, vector<int>& temp, int start, int end) {
    if(start >= end) return 0;
    int mid = start + (end - start) / 2;
    long c = 0;
    c += mergeSort(arr, temp, start, mid);
    c += mergeSort(arr, temp, mid + 1, end);
    c += merge(arr, temp, start, mid, end);
    return c;
}

long countInversions2(vector<int> arr) {
    long c = 0; // inversion count
    vector<int> temp(arr.size(), 0);
    c = mergeSort(arr, temp, 0, arr.size()-1);
    return c;
}

int main () {
    vector<int> arr = {7, 5, 3, 1};  // Output - 6
    cout << countInversions(arr);
    cout << countInversions2(arr);
    return 0;
}