#include<iostream>
using namespace std;

// Leetcode - 917
// Given a string s, reverse the string according to the following rules:
// All the characters that are not English letters remain in the same position.
// All the English letters (lowercase or uppercase) should be reversed.
// Return s after reversing it.

// Example 1: Input: s = "ab-cd" Output: "dc-ba"
// Example 2: Input: s = "a-bC-dEf-ghIj" Output: "j-Ih-gfE-dCba"
// Example 3: Input: s = "Test1ng-Leet=code-Q!" Output: "Qedo1ct-eeLg=ntse-T!"

// T.C - o(n/2) => O(n)
string reverseOnlyLetters(string s) {
    int i = 0;
    int j = s.size() - 1;
    while(i < j) {
        if(isalpha(s[i]) && isalpha(s[j])) {
            swap(s[i], s[j]);
            i++; j--;
        } else if(!isalpha(s[i])) {            
            i++; 
        }
        else {
            j--;
        }
    }
    return s;
}
int main() {
    string s = "a-bC-dEf-ghIj";
    cout << reverseOnlyLetters(s);
    return 0;
}