#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
//lowerbound - returns the index of first occurrence of a number
//upperbound - returns the next index of  last occurrence of a number
// upper and lower bound does not return the index it returns the kind of an address
int main() {
    vector<int> v = {1,1,2,2,2,3,4};
    auto it = lower_bound(v.begin(), v.end(), 2);
    cout << *it << endl;
    cout << "Index: " << it - v.begin() << endl;
    auto it2 = upper_bound(v.begin(), v.end(), 2);
    cout << *it2 << endl;
    cout << "Index it2: " << it2 - v.begin();

}
*/


// Majority Element (leetcode - 169)
// Given an array nums of size n, return the majority element.
// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
// T.C -> O(nlogn)

int majorityElement(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    // majority element will always exist at the mid of the sorted version of array
    return nums[(0 + nums.size()- 1) / 2]; 
}
int main() {
    vector<int> nums = {2,2,1,1,1,2,2};
    cout << majorityElement(nums); // O/P : 2
}






