#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

// leetcode - 53
/*
Given an integer array nums, find the subarray with the largest sum, and return its sum.
Example 1: Input: nums = [-2,1,-3,4,-1,2,1,-5,4] ; Output: 6 ; Explanation: The subarray [4,-1,2,1] has the largest sum 6.
Example 2: Input: nums = [1] ; Output: 1 ; Explanation: The subarray [1] has the largest sum 1. 
Example 3: Input: nums = [5,4,-1,7,8] ; Output: 23 ; Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.
*/

// Time Complexity - O(nlogn)
// Space Complexity - O(logn)

int maxSubArray(vector<int>& v, int start, int end) {
    if(start == end) return v[start];
    int maxLeftBorderSum = INT_MIN, maxRightBorderSum = INT_MIN;
    int mid = start + ((end - start) >> 1);

    int maxLeftSum = maxSubArray(v, start, mid);
    int maxRightSum = maxSubArray(v, mid + 1, end);

    // Max Cross Border Sum
    int leftBorderSum = 0, rightBorderSum = 0;
    for(int i = mid; i >= start; i--) {
        leftBorderSum += v[i];
        if(leftBorderSum > maxLeftBorderSum) maxLeftBorderSum = leftBorderSum;
    }

    for(int i = mid + 1; i <= end; i++) {
        rightBorderSum += v[i];
        if(rightBorderSum > maxRightBorderSum) maxRightBorderSum = rightBorderSum;
    }
    int crossBorderSum = maxLeftBorderSum + maxRightBorderSum;
    return max(maxLeftSum, max(maxRightSum, crossBorderSum));
}

int main() {
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout << maxSubArray(nums, 0, nums.size() - 1);
    return 0;
}