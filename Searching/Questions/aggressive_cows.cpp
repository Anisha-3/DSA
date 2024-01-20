#include<iostream>
#include<numeric>
#include<vector>
#include<algorithm>
using namespace std;

/* SAMPLE TEST CASE : Minimum distance between any two of them(cows) is the maximum possible
Number of stalls(N) : 5
A[i] (Possition of a stall) = {1, 2, 4, 8, 9}
Number of Aggressive cows(K)  : 3
Ans : 3
*/

bool isPossibleSolution(vector<int> &stalls, int k, int mid) {
    // can we place k cows with atleast mid distance between cows
    int c = 1;
    // lets consider the first cows pos
    int pos = stalls[0];
    // now we will try to keep the cows with all the possible stalls and see if they can fit in within the gap
    for(int i = 0; i < stalls.size(); i++) {
        // we'll check if the gap between the cows is greater(atleast) the given mid
        if(stalls[i] - pos >= mid) { // if so we'll place the cow and update the new position of the current cow
            c++;
            pos = stalls[i]; // one more cow has been placed
        }
        if(c == k) { // if we've successfully placed all the cows within(atleast) the given gap then the gap is a possible mid(sol)
            return true;
        }
    } return false;
}

int solve(int n, int k, vector<int> &stalls) {
    // Write your code here
    sort(stalls.begin(), stalls.end());
    int start = 0;
    int end = stalls[stalls.size() - 1] - stalls[0];
    int ans = -1;
        
    while(start <= end) {
        int mid = start + (end - start) / 2;
        if(isPossibleSolution(stalls, k, mid)) { // if we find out that the gap(middle element) can accumulate then we'll save that ans
            // but we need to find the maximum possible distance so we have to move the domain(searchSpace) to the rigth where the gap is more
            ans = mid;
            start = mid + 1;
        } else { // if we're not able to accomodate the cows within the given gap(middle element) then we have to decrease the gap as there is more chances for 1 cow to be next to another cow 
            // where the gap is just 1, so we will shift the domain(searchSpace) to the left.
            end = mid - 1;
        }
    }
    return ans;
}

int main() {
    int n, k;
    cout << "Enter the number of stalls: ";
    cin >> n;
    cout << "Enter the number of Aggressive Cows: ";
    cin >> k;
    vector<int> stalls(n);
    cout << "Enter the possition of ith stall: ";
    for(int i = 0; i < n; i++) {
        cin >> stalls[i];
    }
    
    cout << solve(n, k, stalls) ; 
    return 0;
}