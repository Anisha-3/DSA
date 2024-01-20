#include<iostream>
#include<numeric>
using namespace std;

/* SAMPLE TEST CASE (continuous books)
Enter the number of books(N) : 4
A[i] (No. of Pages in each book) = {12 34 67 90}
Enter the number of students(M) : 2
Ans : 113
*/

bool isPossibleSolution(int A[], int N, int M, int sol) {
    int pageSum = 0;
    int c = 1;
    for(int i = 0; i < N; i++) {
        if(A[i] > sol) {
            return false;
        } 
        if(pageSum + A[i] > sol) {
            c++;
            pageSum = A[i];
            if(c > M) {
                return false;
            }
        } else {
            pageSum += A[i];
        }
    }
    return true;
}
//Function to find minimum number of pages.
int findPages(int A[], int N, int M) {
    if(M > N) return -1;
    
    int start = 0;
    int end = accumulate(A, A+N, 0);
    int ans = -1;
        
    while(start <= end) {
        int mid = start + (end - start) / 2;
        if(isPossibleSolution(A, N, M, mid)) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter the number of books: ";
    cin >> n;
    int A[n];
    cout << "Enter the number of pages in ith book: ";
    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }
    int m;
    cout << "Enter the number of students: ";
    cin >> m;
    cout << findPages(A, n, m) << endl;
    return 0;
}