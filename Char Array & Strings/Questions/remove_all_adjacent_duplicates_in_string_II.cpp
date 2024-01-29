#include<iostream>
#include<vector>
using namespace std;

// Leetcode - 1209
// You are given a string s and an integer k, a k duplicate removal consists of choosing k adjacent and equal letters from s and removing them, causing the left and the right side of the deleted substring to concatenate together.
// We repeatedly make k duplicate removals on s until we no longer can.
// Return the final string after all such duplicate removals have been made. It is guaranteed that the answer is unique.

// Example 1: Input: s = "abcd", k = 2 Output: "abcd" Explanation: There's nothing to delete.
// Example 2: Input: s = "deeedbbcccbdaa", k = 3 Output: "aa" Explanation: First delete "eee" and "ccc", get "ddbbbdaa" Then delete "bbb", get "dddaa" Finally delete "ddd", get "aa"
// Example 3: Input: s = "pbbcggttciiippooaais", k = 2 Output: "ps"

//                                              METHOD - 1
// while adding newch in ans, check are last k-1 char are same as newch
// T.C -> O(NK)
bool areLastk_1CharsSame(string&ans, char&newch, int k_1) {
    int it = ans.size() - 1;
    for(int i = 0; i < k_1; i++) {
        if(newch != ans[it]) return false;
        it--;
    }
    return true;
}
string removeDuplicates2(string s, int k) {
    string ans;
    for(int  i = 0; i < s.size(); i++) {
        char& newch = s[i];
        if(ans.size() < k - 1) {
            ans.push_back(newch);
        } else {
            if(areLastk_1CharsSame(ans, newch, k - 1)) {
                for(int j = 0; j < k - 1; j++) {
                    ans.pop_back();
                }
            } else {
                ans.push_back(newch);
            }
        }
    }
    return ans;
}


//                                              METHOD - 2
// Special Two Pointer approach
// T.C -> O(N)
string removeDuplicates(string s, int k) {
        // two pointer
    int i = 0, j = 0;
    vector<int> count(s.size());
    while(j < s.size()) {
        s[i] = s[j];
        count[i] = 1;
        if(i > 0 && s[i] == s[i - 1]) {
            count[i] += count[i - 1];
        } if(count[i] == k) {
            i -= k;
        }
        i++; j++;
    }
    return s.substr(0, i);
}
int main() {
    string s = "deeedbbcccbdaa";
    int k = 3;
    cout << removeDuplicates(s, k) << endl;
    return 0;
}