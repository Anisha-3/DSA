#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

// Leetcode - 49
// Given an array of strings strs, group the anagrams together. You can return the answer in any order.
// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

// Example 1: Input: strs = ["eat","tea","tan","ate","nat","bat"] Output: [["bat"],["nat","tan"],["ate","eat","tea"]]
// Example 2: Input: strs = [""] Output: [[""]]
// Example 3: Input: strs = ["a"] Output: [["a"]]



// N - strs.length() and K - length of largest string



//                                          METHOD - 1
// T.C -> O(N.KlogK)
// S.C -> O(N.K) + Map Size
vector<vector<string>> groupAnagrams(vector<string>& strs) {
    map<string, vector<string>> mp;
    for(auto str: strs) {
        string s = str;
        sort(s.begin(), s.end());
        mp[s].push_back(str);
    }

    vector<vector<string>> ans;
    for(auto it = mp.begin(); it != mp.end(); it++) {
        ans.push_back(it -> second);
    }
    return ans;
}

/*
//                                          METHOD - 2
// T.C -> O(N.K)
// S.C -> O(N.K) + Map Size
std::array<int, 256> hash(string s) {
    std::array<int, 256> hash = {0};
    for(int i = 0; i < s.size(); i++) {
        hash[s[i]]++;
    }
    return hash;
}
vector<vector<string>> groupAnagrams(vector<string>& strs) {
    map<std::array<int, 256>, vector<string>> mp;
    for(auto str: strs) {
        mp[hash(str)].push_back(str);
    }

    vector<vector<string>> ans;
    for(auto it = mp.begin(); it != mp.end(); it++) {
        ans.push_back(it -> second);
    }
    return ans;
}
*/

int main() {
    vector<string> v{"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> res = groupAnagrams(v);
    cout << "Group Anagram Results:\n";
    for (const auto &i : res) {
        for (const auto &j : i)
            cout << j << ' ';
        cout << endl;
    }
    return 0;
}


