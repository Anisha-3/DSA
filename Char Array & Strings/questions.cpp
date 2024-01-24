#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
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
// Remove all occurence of a substring (leetcode - 1910)
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

/*
// Minimum Amount of Time to Collect Garbage (leetcode - 2391)
// You are given a 0-indexed array of strings garbage where garbage[i] represents the assortment of garbage at the ith house. garbage[i] consists only of the characters 'M', 'P' and 'G' representing one unit of metal, paper and glass garbage respectively. Picking up one unit of any type of garbage takes 1 minute.
// You are also given a 0-indexed integer array travel where travel[i] is the number of minutes needed to go from house i to house i + 1.
// There are three garbage trucks in the city, each responsible for picking up one type of garbage. Each garbage truck starts at house 0 and must visit each house in order; however, they do not need to visit every house.
// Only one garbage truck may be used at any given moment. While one truck is driving or picking up garbage, the other two trucks cannot do anything.
// Return the minimum number of minutes needed to pick up all the garbage.

int garbageCollection(vector<string>& garbage, vector<int>& travel) {
    int pickP = 0;
    int pickM = 0;
    int pickG = 0;

    int travelP = 0;
    int travelM = 0;
    int travelG = 0;

    int lastP = 0;
    int lastM = 0;
    int lastG = 0;

    //pick time
    for(int i = 0; i < garbage.size(); i++) {
        string curr = garbage[i];
        for(int j = 0; j < curr.length(); j++) {
            char ch = curr[j];

            if(ch == 'P') {
                pickP++;
                lastP = i;
            } else if(ch == 'G') {
                pickG++; 
                lastG = i;                   
            } else if(ch == 'M') {
                pickM++; 
                lastM = i;                   
            }
        }
    }

    //travel time
    for(int i = 0; i < lastP; i++) {
        travelP += travel[i];
    }
    for(int i = 0; i < lastG; i++) {
        travelG += travel[i];
    }
    for(int i = 0; i < lastM; i++) {
        travelM += travel[i];
    }

    int ans = (pickP + travelP) + (pickG + travelG) + (pickM + travelM);
    return ans;
}

int main() {
    vector<string> garbage = {"G","P","GP","GG"};
    vector<int> travel = {2,4,3};
    cout << garbageCollection(garbage, travel); // O/P : 21
    // eg: garbage = {"MMM","PGM","GP"}  travel = {3,10}  O/P : 37
    return 0;
}
*/


/*
// Custom Sort String (leetcode - 791)
// You are given two strings order and s. All the characters of order are unique and were sorted in some custom order previously.
// Permute the characters of s so that they match the order that order was sorted. More specifically, if a character x occurs before a character y in order, then x should occur before y in the permuted string.
// Return any permutation of s that satisfies this property.

string str;
// custom comparator
bool compare(char char1, char char2) {
    // this will return true, if position of character1 in str string is less than the position of character2 in str string

    // when true is returned, then char1 will be placed before char2 in output string
    return (str.find(char1) < str.find(char2));
}
string customSortString(string order, string s) {
    str = order;
    sort(s.begin(), s.end(), compare);
    return s;
}
int main() {
    string order = "cba";
    string s = "abcd"; 
    cout << customSortString(order, s); // O/P : cbad
    return 0;
}
*/


/*
// Find and Replace Pattern
// Given a list of strings words and a string pattern, return a list of words[i] that match pattern. You may return the answer in any order.
// A word matches the pattern if there exists a permutation of letters p so that after replacing every letter x in the pattern with p(x), we get the desired word.
// Recall that a permutation of letters is a bijection from letters to letters: every letter maps to another letter, and no two letters map to the same letter.

void createMapping(string& str) {
    // find mapping
    char start = 'a';
    char mapping[300] = {0};
    for(auto ch: str) {
        if(mapping[ch] == 0) {
            mapping[ch] = start;
            start++;
        }
    }

    // update the string
    for(int i = 0; i < str.length(); i++) {
        char ch = str[i];
        str[i] = mapping[ch];
    }
}
vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
    vector<string> ans;
    // firstly normalise the pattern
    createMapping(pattern);

    for(string s: words) {
        string tempString = s;
        // normalise tempString
        createMapping(tempString);

        if(tempString == pattern){
            // it means, that string s is a valid answer
            ans.push_back(s);
        }
    }
    return ans;
}
int main() {
    vector<string> words = {"abc","deq","mee","aqq","dkd","ccc"};
    string pattern = "abb"; 
    vector<string> ans = findAndReplacePattern(words, pattern); // O/P : ["mee","aqq"]
    for(int i = 0; i < ans.size(); i++) {
        cout << '"' << ans[i] <<'"' << " ";
    }
    return 0;
}
*/

