#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

// Leetcode - 121
/*
You are given an array prices where prices[i] is the price of a given stock on the ith day.
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

Example 1: Input: prices = [7,1,5,3,6,4] Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

Example 2: Input: prices = [7,6,4,3,1] Output: 0
Explanation: In this case, no transactions are done and the max profit = 0.
*/

/*
Time Complexity - O(N+1) => O(N)
Space Complexity - O(N+1) => O(N)
*/

void maxProfitFinder(vector<int>& prices, int i, int &minPrice, int &maxProfit) {
    // base case
    if(i == prices.size()) return;

    if(prices[i] < minPrice) minPrice = prices[i];
    int todaysProfit = prices[i] - minPrice;
    if(todaysProfit > maxProfit) maxProfit = todaysProfit;

    // RE
    maxProfitFinder(prices, i+1, minPrice, maxProfit);
}

int maxProfit(vector<int>& prices) {
    int minPrice = INT_MAX;
    int maxProfit = INT_MIN;
    maxProfitFinder(prices, 0, minPrice, maxProfit);
    return maxProfit;
}

int main() {
    vector<int> prices = {1,2};
    cout << maxProfit(prices);
    return 0;
}