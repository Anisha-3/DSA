#include<iostream>
using namespace std;

// T.C - O(n/2+1) => O(n)
// S.C - O(n/2+1) => O(n)

void reverseStr(string &s, int start, int end) {
    // base case
    if(start >= end) {
        return;
    }
    // processing
    swap(s[start], s[end]);
    // recursive call
    reverseStr(s, start + 1, end - 1);
}

int main() {
    string s;
    cin >> s;
    reverseStr(s, 0, s.size()-1);
    cout << s;
    return 0;
}