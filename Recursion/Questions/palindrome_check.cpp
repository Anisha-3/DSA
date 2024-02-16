#include<iostream>
using namespace std;

/*
Time Complexity - O(N/2) => O(N)
Space Complexity - O(N/2) => O(N)
*/

bool palindromeCheck(string &str, int start, int end) {
    // base case
    if(start >= end) {
        return true;
    }
    if(str[start] != str[end]) {
        return false;
    }
    return palindromeCheck(str, start+1, end-1);  
}

int main() {
    string s = "racecar";
    cout << (palindromeCheck(s, 0, s.length() - 1) ? "Yes" : "No") << endl;
    return 0;
}
