#include<iostream>
#include<vector>
using namespace std;

// Leetcode - 221
/*
Given an m x n binary matrix filled with 0's and 1's, find the largest square containing only 1's and return its area.
Example 1: Input: matrix = [["1","0","1","0","0"],["1","0","1","1","1"],["1","1","1","1","1"],["1","0","0","1","0"]]  Output: 4
Example 2: Input: matrix = [["0","1"],["1","0"]] Output: 1
Example 3: Input: matrix = [["0"]]  Output: 0
*/

int solve(vector<vector<char>>& matrix, int i, int j, int row, int col, int &maxi) {
    // base case
    if(i >= row || j >= col) {
        return 0;
    }
        
    // explore all 3 directions
    int right = solve(matrix, i, j + 1, row, col, maxi);
    int diagnol = solve(matrix, i + 1, j + 1, row, col, maxi);
    int down = solve(matrix, i + 1, j, row, col, maxi);

    // check can we build square from current position
    if(matrix[i][j] == '1') {
        int ans = 1 + min(right, min(down, diagnol));
        maxi = max(maxi, ans);
        return ans;
    } else {
        // if current position is 0 then ans is also 0
        return 0;
    }
}
int maximalSquare(vector<vector<char>>& matrix) {
    int i = 0;
    int j = 0;
    int row = matrix.size();
    int col = matrix[0].size();
    int maxi = 0;
    int ans = solve(matrix, i, j, row, col, maxi);
    return maxi*maxi;
}
int main() {
    vector<vector<char>> matrix = {{'1','0','1','0','0'}, {'1','0','1','1','1'}, {'1','1','1','1','1'}, {'1','0','0','1','0'}};
    cout << maximalSquare(matrix);
    return 0;
}