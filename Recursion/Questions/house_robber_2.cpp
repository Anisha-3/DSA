#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

// Leetcode - 213
/*
You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed. 
All houses at this place are arranged in a circle. That means the first house is the neighbor of the last one. 
Meanwhile, adjacent houses have a security system connected, and it will automatically contact the police if two adjacent houses were broken into on the same night.
Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police.

Example 1: Input: nums = [2,3,2] Output: 3
Explanation: You cannot rob house 1 (money = 2) and then rob house 3 (money = 2), because they are adjacent houses.

Example 2: Input: nums = [1,2,3,1] Output: 4
Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3). Total amount you can rob = 1 + 3 = 4.

Example 3: Input: nums = [1,2,3] Output: 3
*/

int solve(vector<int>& nums, int s, int e) {
    // base case
    if(s > e) {
        return 0;
    }

    // chori krlo -> ith index pr
    int option1 = nums[s] + solve(nums, s + 2, e);
    // chori mat krlo -> ith index pr
    int option2 = 0 + solve(nums, s + 1, e);

    int finalAns = max(option1, option2);
    return finalAns;
}
int rob(vector<int>& nums) {
    int n = nums.size();
    // single element
    if(n == 1) {
        return nums[0];
    }
    int option1 = solve(nums, 0, n-2);
    int option2 = solve(nums, 1, n-1);
    int ans = max(option1, option2);
    return ans;
}

int main() {
    vector<int> nums = {1,2,3,1};
    cout << rob(nums);
    return 0;
}