#include<iostream>
using namespace std;

/*
Given a fence with n posts and k colors, find out the number of ways of painting the fence such that at most 2 adjacent posts have the same color.

Example 1: Input : n = 2 k = 4 Output : 16 
Explanation: We have 4 colors and 2 posts. Ways when both posts have same color : 4
Ways when both posts have diff color :4(choices for 1st post) * 3(choices for 2nd post) = 12

Example 2: Input : n = 3 k = 2 Output : 6
*/

int getPaintWays(int n, int k) {
    // base case
    if(n == 1) {
        return k;
    }
    if(n == 2) {
        return (k + k * (k - 1));
    }

    int ans = (k - 1) * (getPaintWays(n-1, k) + getPaintWays(n-2, k));
    return ans;
}

int main() {
    int n = 3; 
    int k = 3;
    int ans = getPaintWays(n,k);
    cout << ans << endl;
    return 0;
}