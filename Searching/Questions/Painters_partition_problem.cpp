#include<iostream>
#include<numeric>
using namespace std;

/* SAMPLE TEST CASE : Minimum time to get the job done (continuous board)
Enter the number of boards(N) : 4
A[i] (Length of ith board) = {10, 20, 30, 40}
Number of Painters(K) (each painter takes 1 unit of time to paint 1 unit of board) : 2
Ans : 60
*/


bool isPossibleSolution(int arr[], int n, int k, long long mid) {
    long long timeSum = 0;
    int c = 1;
    for(int i = 0; i < n; i++) {
        if(arr[i] > mid) {
            return false;
        } 
        if(arr[i] + timeSum > mid) {
            c++;
            timeSum = arr[i];
            if(c > k) {
                return false;
            }
        } else {
            timeSum += arr[i];
        }
    }
    return true;
}

long long minTime(int arr[], int n, int k) {
    // code here
    long long start = 0;
    long long end = 0;
    for(int i = 0; i < n; i++) {
        end += arr[i];
    }
    long long ans = -1;
        
    while(start <= end) {
        long long mid = start + (end - start) / 2;
        if(isPossibleSolution(arr, n, k, mid)) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    // return minimum time
    return ans;
}

int main() {
    int n, k;
    cout << "Enter the number of boards: ";
    cin >> n;
    cout << "Enter the number of painters: ";
    cin >> k;
    int arr[n];
    cout << "Enter the length of ith board: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << minTime(arr, n, k) ; 
    return 0;
}