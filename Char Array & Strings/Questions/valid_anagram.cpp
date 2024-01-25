#include<iostream>
using namespace std;

// Leetcode - 242
// Given two strings s and t, return true if t is an anagram of s, and false otherwise.
// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.
// Example 1: Input: s = "anagram", t = "nagaram" ; Output: true
// Example 2: Input: s = "rat", t = "car" ; Output: false


//                                  METHOD - 1 : Brute Force 
// T.C - O(nlogn)
// -> sort s using stl sort function
// -> sort t using stl sort function
// -> if(s==t) return true; else return false;

//                                  METHOD - 2 : Using Counting
// No. of respective characters in string s should be same to that of string t
// that is we'll make frequency table for both string s and string t and if both frequency tables are same then it is an anagram
// Frequency table - make an array of size 256 and initialize value of all the indexes as 0 and increment the value once that character is hit to its corresponding index.
// T.C - O(n + m)

bool isAnagram(string s, string t) {
    int freqTable[256] = {0};
    for(int i = 0; i < s.size(); i++) {
        freqTable[s[i]]++;
    } // O(n)

    for(int i = 0; i < t.size(); i++) {
        freqTable[t[i]]--;
    } // O(m)

    for(int i = 0; i < 256; i++) {
        if(freqTable[i] != 0) {
            return false;
        }
    } // O(256)
    return true;
}

int main() {
    string s = "anagram";
    string t = "nagaram";
    if(isAnagram(s,t)) {
        cout << "True" << endl;
    } else{
        cout << "False" << endl;
    }
    return 0;
}
