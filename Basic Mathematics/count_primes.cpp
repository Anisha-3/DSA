#include<iostream>
#include<vector>
using namespace std;

/*
Prime Number
1. Naive Approach 
2. sqrt Approach
3. Sieve of Eratosthenes
4.  Segmented Sieve (Fastest) - similar to third approach but in this there is concept of high and low, instead of finding prime numbers till n in this approach we find prime numbers between low and high.
*/

// Leetcode - 204
// Given an integer n, return the number of prime numbers that are strictly less than n.
// Example 1: Input: n = 10 Output: 4 Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
// Example 2: Input: n = 0 Output: 0
// Example 3: Input: n = 1 Output: 0

// 3. Sieve of Eratosthenes
// Time Complexity - O(n * log (log n))

int countPrimes(int n) {
    if(n == 0) return 0;

    vector<bool> sieve(n, true); // all are prime marked already
    sieve[0] = sieve[1] = false;
    int ans = 0;
    for(int i = 2; i < n; i++) {
        if(sieve[i]) {
            ans++;
            
            int j = 2*i;
            while(j < n) {
                sieve[j] = false; 
                j += i;
            }
        }
    }
    return ans;
}

int main() {
    int n = 10;
    cout << countPrimes(n) << endl;
    return 0;
}