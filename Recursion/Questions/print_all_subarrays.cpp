#include<iostream>
#include<vector>
using namespace std;

/*
Time Complexity - O(N*N) => O(N^2)
Space Complexity - O(N+2) => O(N)
*/

void printSubarray_util(vector<int> &nums, int start, int end) {
    // base case
    if(end >=  nums.size()) {
        return ;
    }

    for(int i = start; i <= end; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    //RE
    printSubarray_util(nums, start, end+1);
}

void printSubarray(vector<int> &nums) {
    for(int start = 0; start < nums.size(); start++) {
        int end = start;
        printSubarray_util(nums, start, end);
    }
}

int main() {
    vector<int> nums{1,2,3,4,5};
    printSubarray(nums);
    return 0;
}