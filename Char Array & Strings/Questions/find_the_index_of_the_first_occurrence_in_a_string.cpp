#include<iostream>
using namespace std;

// Leetcode - 28
// Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

// Example 1: 
// Input: haystack = "sadbutsad", needle = "sad" 
// Output: 0 
// Explanation: "sad" occurs at index 0 and 6. The first occurrence is at index 0, so we return 0.

// Example 2:
// Input: haystack = "leetcode", needle = "leeto"
// Output: -1
//Explanation: "leeto" did not occur in "leetcode", so we return -1.

// Time Complexity = O((n - m + 1) * m) => O(NM)

int strStr(string haystack, string needle) {
    int n = haystack.size();
    int m = needle.size();

    for(int i = 0; i <= n - m; i++) {
        for(int j = 0; j < m; j++) {
            if(needle[j] != haystack[i + j]) {
                break;
            } 
            if(j == m - 1) {
                return i;
            }
        }
    }
    return -1;
}

int main() {
    string haystack = "sadbutsad";
    string needle = "sad";
    cout << strStr(haystack, needle) << endl;
    return 0;
}