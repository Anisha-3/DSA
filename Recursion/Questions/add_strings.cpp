#include<iostream>
#include<algorithm>
using namespace std;

/*
Given two non-negative integers, num1 and num2 represented as string, return the sum of num1 and num2 as a string.
You must solve the problem without using any built-in library for handling large integers (such as BigInteger). You must also not convert the inputs to integers directly.
Example 1: Input: num1 = "11", num2 = "123" Output: "134"
Example 2: Input: num1 = "456", num2 = "77" Output: "533"
Example 3: Input: num1 = "0", num2 = "0" Output: "0"
*/

/*
a = length of num1; b = length of num2
N = max(a, b)
Time Complexity - O(N+1) => O(N)
Space Complexity - O(N+1) => O(N)
*/

void addRE(string &num1, int p1, string &num2, int p2, string &ans, int carry=0) {
    // base case
    if(p1 < 0 && p2 < 0) {
        if(carry != 0) {
            ans.push_back(carry + '0');
        }
        return;
    }
    // recursive call
    int n1 = (p1 >= 0 ? num1[p1] : '0' ) - '0';
    int n2 = (p2 >= 0 ? num2[p2] : '0' ) - '0';
    int csum = n1 + n2 + carry;
    int digit = csum % 10;
    carry = csum / 10;
    ans.push_back(digit + '0');
        
    addRE(num1, p1-1, num2, p2-1, ans, carry);
}
string addStrings(string num1, string num2) {
    string ans = "";
    addRE(num1, num1.size()-1, num2, num2.size()-1, ans, 0);
    reverse(ans.begin(), ans.end());
    return ans;
}
int main() {
    cout << addStrings("11","123") << endl;
    return 0;
}