#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

// leetcode - 47
/*
Given a collection of numbers, nums, that might contain duplicates, return all possible unique permutations in any order.
Example 1: Input: nums = [1,1,2]
Output: [[1,1,2], [1,2,1], [2,1,1]]
Example 2: Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
*/

void permuteUniqueHelper(vector<int>& nums, vector<vector<int>>& ans, int start) {
    // base
    if(start == nums.size()) {
        ans.push_back(nums);
        return;
    }

    unordered_map<int, bool> visited;

    for(int i = start; i < nums.size(); i++) {
        if(visited.find(nums[i]) != visited.end()) continue;
        visited[nums[i]] = true;
        swap(nums[i], nums[start]);
        permuteUniqueHelper(nums, ans, start + 1);
        swap(nums[i], nums[start]);
    }
}
vector<vector<int>> permuteUnique(vector<int>& nums) {
    vector<vector<int>> ans;
    permuteUniqueHelper(nums, ans, 0);
    return ans;
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> res = permuteUnique(nums);
    for(int i = 0; i < res.size(); i++) {
        for(int j = 0; j < res[i].size(); j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}