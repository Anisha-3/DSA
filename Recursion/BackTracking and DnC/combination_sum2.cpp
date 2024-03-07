#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// leetcode - 40
/*
Given a collection of candidate numbers (candidates) and a target number (target), find all unique combinations in candidates where the candidate numbers sum to target.
Each number in candidates may only be used once in the combination.
Note: The solution set must not contain duplicate combinations.
Example 1: Input: candidates = [10,1,2,7,6,1,5], target = 8 
Output: [ [1,1,6], [1,2,5], [1,7], [2,6] ]
Example 2: Input: candidates = [2,5,2,1,2], target = 5
Output: [ [1,2,2], [5] ]
*/

void combinationSumHelper(vector<int>& candidates, int target, vector<int>& v, vector<vector<int>>& ans, int index) {
    // base case
    if(target == 0) {
        ans.push_back(v);
        return;
    }
    if(target < 0) return;


    for(int i = index; i < candidates.size(); i++) {
        if(i > index && candidates[i] == candidates[i - 1]) continue;
        v.push_back(candidates[i]);
        combinationSumHelper(candidates, target - candidates[i], v, ans, i + 1);
        v.pop_back();
    }
}
vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    sort(candidates.begin(), candidates.end());
    vector<vector<int>> ans;
    vector<int> v;
    combinationSumHelper(candidates, target, v, ans, 0);        
    return ans;
}

int main() {
    vector<int> c = {10,1,2,7,6,1,5};
    vector<vector<int>> res = combinationSum2(c, 8);
    for(int i = 0; i < res.size(); i++) {
        for(int j = 0; j < res[i].size(); j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}