#include<iostream>
using namespace std;

// T.C - O(n)
// S.C - O(n)

// Method - 1
void lastOccLTR(string &s, int x, int i, int &ans){
    // base case
    if(i >= s.size()) {
        return;
    }

    if(s[i] == x) {
        ans = i;
    }
    lastOccLTR(s, x, i+1, ans);
}

// Method - 2
void lastOccRTL(string &s, int x, int i, int &ans){
    // base case
    if(i < 0) {
        return;
    }

    if(s[i] == x) {
        ans = i;
        return;
    }
    lastOccRTL(s, x, i-1, ans);
}

// Method - 3
// we can use stl function strrchr()

int main() {
    string s; // abcddedg
    cin >> s;
    char x; // d
    cin >> x;
    int ans = -1;
    // lastOccLTR(s, x, 0, ans);
    lastOccRTL(s, x, s.size()-1, ans);
    cout << ans; // 6
    return 0;
}