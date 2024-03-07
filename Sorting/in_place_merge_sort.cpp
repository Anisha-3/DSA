#include<iostream>
#include<vector>
using namespace std;

/*
Time complexity
Best Case: O(nlogn)
Avg Case: O(nlogn)
Worst Case: O(nlogn)
Space Complexity: O(1)
*/

// Gap Method 
// gap = ceil (totalSize / 2) or (totalSize / 2) + (totalSize % 2) => eg: ceil(5/2) = 3 or 2(5/2) + 1(5%2) = 3

void mergeInPlace(vector<int>& v, int start, int mid, int end) {
    int total_len = end - start + 1;
    int gap = total_len / 2 + total_len % 2;  // ceil
    while(gap > 0) {
        int i = start, j = start + gap;
        while(j <= end) {
            if(v[i] > v[j]) {
                swap(v[i], v[j]);
            }
            ++i, ++j;
        }
        gap = gap <= 1 ? 0 : (gap / 2) + (gap % 2);
    }
}
void mergeSort(vector<int>& v, int start, int end) {
    if(start >= end) return;
    int mid = start + (end - start) / 2;
    // divide
    mergeSort(v, start, mid);
    mergeSort(v, mid + 1, end);
    // conqour
    mergeInPlace(v, start, mid, end);
}

int main() {
    vector<int> nums = {2,1,6,9,4,5};
    int size = 6;
    int s = 0;
    int e = size - 1;
    cout << "Before Merge Sort: " << endl;
    for(int i = 0; i < size; i++){
        cout << nums[i] << " ";
    } cout << endl;
    mergeSort(nums, s, e);
    cout << "After Merge Sort: " << endl;
    for(int i = 0; i < size; i++){
        cout << nums[i] << " ";
    } cout << endl;
    return 0;
}