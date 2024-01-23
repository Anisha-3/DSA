#include<iostream>
using namespace std;

/*
// Remove All Adjacent Duplicates In String
string removeDuplicates(string s) {
    string ans = "";
    int index = 0;
    while(index < s.length()) {
        if(ans.length() > 0 && ans[ans.length()- 1] == s[index]) {
            ans.pop_back();
        } else {
            ans.push_back(s[index]);
        }index++;
    }return ans;
}

int main() {
    string s = "abbaca"; // O/P: ca
    cout << removeDuplicates(s);
    return 0;
}
*/

/*
// Remove all occurence of a substring
string removeOccurrences(string s, string part) {
    while(s.find(part) != string::npos) {
        //if inside loop, it means that part exists in s string
        s.erase(s.find(part), part.length());
    }
    return s;
}
int main() {
    string s = "daabcbaabcbc"; // O/P: dab
    string part = "abc";
    cout << removeOccurrences(s, part);
    return 0;
}
*/

/*
// Valid Palindrome II : Given a string s, return true if the s can be palindrome after deleting at most one character from it.
// T.C -> O(n)
bool checkPalindrome(string s, int i, int j) {
    while(i < j) {
        if(s[i] == s[j]) {
            i++;
            j--;
        } else {
            return false;
        }
    }return true;
}
bool validPalindrome(string s) {
    int i = 0;
    int j = s.length() - 1;
    while(i < j) {
        if(s[i] == s[j]) {
            i++;
            j--;
        } else {
            // s[i] != s[j]
            // 1 removal allowed
            // check palindrome for remaining string after removal

            // ith character -> remove
            bool ans1 = checkPalindrome(s, i + 1, j);
            // jth character -> remove
            bool ans2 = checkPalindrome(s, i, j - 1);

            return ans1 || ans2;
        }
    }
    // valid palindrome
    // 0 removal
    return true;
}

int main() {
    string s = "abca"; // O/P: true ->  You could delete the character 'c'.
    cout << validPalindrome(s);
    return 0;
}
*/

/* VERY IMPORTENT 
// Palindromic Substrings -> Given a string s, return the number of palindromic substrings in it.

int expand(string s, int i, int j) {
    int count = 0;
    while(i >= 0 && j < s.length() && s[i] == s[j]) {
        count++;
        i--;
        j++;
    }return count;
}
int countSubstrings(string s) {
    int totalCount = 0;
    for(int center = 0; center < s.length(); center++) {
        //ODD length substring - i and j are placed on the same location that means only 1 center
        int oddAns = expand(s, center, center);
        //EVEN length substring - j is placed at i+1 location
        int evenAns = expand(s, center, center + 1);

        totalCount = totalCount + oddAns + evenAns;
    }
    return totalCount;
}

int main() {
    string s1 = "abc"; // O/P: 3 ->  Three palindromic strings: "a", "b", "c".
    string s2 = "aaa"; // O/P: 6 ->  Six palindromic strings: "a", "a", "a", "aa", "aa", "aaa".
    cout << countSubstrings(s1) << endl;
    cout << countSubstrings(s2) << endl;
    return 0;
}
*/

/*
// Decode the Message -> 
// You are given the strings key and message, which represent a cipher key and a secret message, respectively. The steps to decode message are as follows:
// 1. Use the first appearance of all 26 lowercase English letters in key as the order of the substitution table.
// 2. Align the substitution table with the regular English alphabet.
// 3.Each letter in message is then substituted using the table.
// 4. Spaces ' ' are transformed to themselves.

string decodeMessage(string key, string message) {
    // create mapping
    char start = 'a';
    char mapping[280] = {0};

    for(auto ch : key) {
        if(ch != ' ' && mapping[ch] == 0) {
            mapping[ch] = start;
            start++;
        }
    }
    // use mapping
    string ans;
    for(auto ch : message) {
        if(ch == ' ') {
            ans.push_back(' ');
        } else {
            char decodedChar = mapping[ch];
            ans.push_back(decodedChar);
        } 
    }
    return ans;
}
int main() {
    string key = "the quick brown fox jumps over the lazy dog";
    string message = "vkbs bs t suepuv"; 
    cout << decodeMessage(key, message); // O/P : this is a secret
    return 0;
}
*/