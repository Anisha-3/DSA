#include<iostream>
#include<vector>
using namespace std;

vector<bool> Sieve(int n) {
    // create a sieve array of N size telling isPrime
    vector<bool> sieve(n + 1, true); // all are prime marked already
    sieve[0] = sieve[1] = false;
    for(int i = 2; i*i <= n; i++) {  // optimisation 2
        if(sieve[i]) {            
            // int j = 2*i;
            int j = i*i; // optimisation 1: first unmarked number would be i*i, as others have been marked by 2 to (i - 1)
            while(j <= n) {
                sieve[j] = false; 
                j += i;
            }
        }
    }
    return sieve;
}

int main() {
    vector<bool>sieve = Sieve(25);
    for(int i = 0; i <= 25; i++) {
        if(sieve[i]) {
            cout << i << " ";
        }
    }
    return 0;
}