#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/* SAMPLE TEST CASE : maximum integer height of the sawblade that still allows him to cut off at least M metres of wood.
Number of trees(N) : 4
A[i] (Height of ith tree) = {20, 15, 10, 17}
Atleast how much wood is required(M)  : 7
Ans : 15
*/

bool isPossibleSolution(vector<long long int> &treeHeight, long long int n, long long int m, long long int mid) {
    long long int woodCollected = 0;
    for(long long int i = 0; i < n; i++) {
        if(treeHeight[i] > mid){
            woodCollected += treeHeight[i] - mid;
        }
    }
    if(woodCollected >= m) {
        return true;
    } else {
        return false;
    }
}

long long int maxSawBladeHeight(vector<long long int> &treeHeight, long long int n, long long int m) {
    sort(treeHeight.begin(), treeHeight.end());
    long long int start = 0;
    long long int end = *max_element(treeHeight.begin(), treeHeight.end()); //treeHeight[treeHeight.size() - 1]
    long long int ans = -1;

    while(start <= end) {
        long long int mid = start + (end - start) / 2;
        if(isPossibleSolution(treeHeight, n, m, mid)) {
            ans = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return ans;
}

int main() {
    long long int n, m;
    cout << "Enter the number of trees: ";
    cin >> n;
    cout << "Atleast how much wood is required: ";
    cin >> m;
    vector<long long int> treeHeight(n);
    cout << "Enter the Height of ith tree: ";
    for(int i = 0; i < n; i++) {
        cin >> treeHeight[i];
    }
    
    cout << maxSawBladeHeight(treeHeight, n, m) ; 
    return 0;
}