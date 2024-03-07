#include<iostream>
using namespace std;

// Leetcode - 72
/*
Given two strings word1 and word2, return the minimum number of operations required to convert word1 to word2.
You have the following three operations permitted on a word:
    1. Insert a character
    2. Delete a character
    3. Replace a character

Example 1: Input: word1 = "horse", word2 = "ros" Output: 3 Explanation: 
horse -> rorse (replace 'h' with 'r') 
rorse -> rose (remove 'r') 
rose -> ros (remove 'e')

Example 2: Input: word1 = "intention", word2 = "execution" Output: 5 Explanation: 
intention -> inention (remove 't')
inention -> enention (replace 'i' with 'e')
enention -> exention (replace 'n' with 'x')
exention -> exection (replace 'n' with 'c')
exection -> execution (insert 'u')
*/
int solve(string& word1, string& word2, int i, int j) {
    // base case
    if(i >= word1.length()) {
        // word1 string ends i.e length of word1 is less than that of word2
        return word2.length() - j;
    }
    if(j >= word2.length()) {
        // word2 string ends i.e length of word2 is less than that of word1
        return word1.length() - i;
    }
    int ans = 0;

    if(word1[i] == word2[j]) {
        // match
        ans = 0 + solve(word1, word2, i + 1, j + 1);
    } else {
        // not match
        // insert
        int option1 = 1 + solve(word1, word2, i, j + 1);
        // remove
        int option2 = 1 + solve(word1, word2, i + 1, j);
        // replace
        int option3 = 1 + solve(word1, word2, i + 1, j + 1);
        ans = min(option1, min(option2, option3));
    }
    return ans;
}
int minDistance(string word1, string word2) {
    int i = 0;
    int j = 0;
    int ans = solve(word1, word2, i, j);
    return ans;
}
int main() {
    string word1 = "intention";
    string word2 = "execution";
    cout << minDistance(word1, word2);
    return 0;
}