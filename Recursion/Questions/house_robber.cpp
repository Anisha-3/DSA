#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

// Leetcode - 198
/*
You are a professional robber planning to rob houses along a street. 
Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security systems connected and it will automatically contact the police if two adjacent houses were broken into on the same night.
Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police.

Example 1: Input: nums = [1,2,3,1] Output: 4 
Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3). Total amount you can rob = 1 + 3 = 4.

Example 2: Input: nums = [2,7,9,3,1] Output: 12
Explanation: Rob house 1 (money = 2), rob house 3 (money = 9) and rob house 5 (money = 1). Total amount you can rob = 2 + 9 + 1 = 12.
*/

// Time Complexity - O(2^N)
// Space Complexity - O(N)

int solve(vector<int>& nums, int size, int index) {
    // base case
    if(index >= size) {
        return 0;
    }

    // chori krlo -> ith index pr
    int option1 = nums[index] + solve(nums, size, index + 2);
    // chori mat krlo -> ith index pr
    int option2 = 0 + solve(nums, size, index + 1);

    int finalAns = max(option1, option2);
    return finalAns;
}
int rob(vector<int>& nums) {
    int size = nums.size();
    int index = 0;
    int ans = solve(nums, size, index);
    return ans;
}

int main() {
    vector<int> nums = {2,7,9,3,1};
    cout << rob(nums);
    return 0;
}