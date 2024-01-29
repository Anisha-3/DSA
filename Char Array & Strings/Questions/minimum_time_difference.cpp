#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;

// Leetcode - 539
// Given a list of 24-hour clock time points in "HH:MM" format, return the minimum minutes difference between any two time-points in the list.
// Example 1: Input: timePoints = ["23:59","00:00"] Output: 1
// Example 2: Input: timePoints = ["00:00","23:59","00:00"] Output: 0

// corner case - 1. 00:00, 23:59 ; 2. 12:12, 00:13

int convertToMins(string& time) {
    int hr = stoi(time.substr(0, 2));
    int min = stoi(time.substr(3, 2));
    return (60 * hr + min);
}
int findMinDifference(vector<string>& timePoints) {
    vector<int> mins;
    for(auto time : timePoints) {
        mins.push_back(convertToMins(time));
    }
    sort(mins.begin(), mins.end());
    int ans = INT_MAX; // minimum diff
    for(int i = 0; i < mins.size() - 1; i++) {
        ans = min(ans, mins[i + 1] - mins[i]);
    }
    // last diff
    int lastdiff = mins[0] + 1440 - mins[mins.size() - 1];
    ans = min(ans, lastdiff);
    return ans;
}

int main() {
    vector<string> timePoints = {"23:59","00:00"};
    cout << findMinDifference(timePoints) << endl;
    return 0;
}