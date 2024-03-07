#include<iostream>
using namespace std;

/*
Time complexity
Best Case: O(nlogn)
Avg Case: O(nlogn)
Worst Case: O(nlogn)
Space Complexity: O(N)
*/

/* 
// Method - 1  
void merge(vector<int>& v, vector<int>& temp, int start, int mid, int end) {
    int i = start, j = mid + 1;
    // mergerd array => start -> end
    int k = start;
    while(i <= mid && j <= end) {
        if(v[i] <= v[j]) {
            temp[k++] = v[i++];
        } else {
            temp[k++] = v[j++];
        }
    }

    // handle remaining elements in case of diff array size
    while(i <= mid) {
        temp[k++] = v[i++];
    }
    while(j <= end) {
        temp[k++] = v[j++];
    }

    // copy merged data
    while(start <= end) {
        v[start] = temp[start];
        start++;
    }
}
void mergeSort(vector<int>& v, vector<int>& temp, int start, int end) {
    if(start >= end) return;

    int mid = start + (end - start) / 2;
    // divide
    mergeSort(v, temp, start, mid);
    mergeSort(v, temp, mid + 1, end);
    // conqour
    merge(v, temp, start, mid, end);
}
vector<int> sortArray(vector<int>& nums) {
    vector<int>temp(nums.size(), 0);
    mergeSort(nums, temp, 0, nums.size() - 1);
    return nums;
}
*/

// Method - 2
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