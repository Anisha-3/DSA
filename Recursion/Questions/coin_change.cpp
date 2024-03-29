#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

// Leetcode - 322
/*
You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money.
Return the fewest number of coins that you need to make up that amount. If that amount of money cannot be made up by any combination of the coins, return -1.
You may assume that you have an infinite number of each kind of coin.

Example 1: Input: coins = [1,2,5], amount = 11 Output: 3 Explanation: 11 = 5 + 5 + 1
Example 2: Input: coins = [2], amount = 3 Output: -1
Example 3: Input: coins = [1], amount = 0 Output: 0
*/

int solve(vector<int>& coins, int amount) {
    // base case
    if(amount == 0) {
        return 0;
    }
    int mini = INT_MAX;
    int ans = INT_MAX;
    for(int i = 0; i < coins.size(); i++) {
        int coin = coins[i];
        // we'll use current coin only when its value is <= amount
        if(coin <= amount) {
            int recAns = solve(coins, amount - coin);
            if(recAns != INT_MAX){
                ans = 1 + recAns;
            }
        }
        mini = min(mini, ans);
    }
    return mini;
}
int coinChange(vector<int>& coins, int amount) {
    int ans = solve(coins, amount);
    if(ans == INT_MAX) {
        return -1;
    } else {
        return ans;
    }
}
int main() {
    vector<int> v{1,2,5};
    int amount = 11;
    cout << coinChange(v, amount) << endl;
    return 0;
}