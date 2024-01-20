#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/* SAMPLE TEST CASE : minimum time to get the order done
Prata(P <= 1000) : 10 | 8 | 8
Cooks(L <= 50) : 4 | 1 | 8 
Rank of each cook(1 <= R <= 8) : 1 2 3 4 | 1 | 1 1 1 1 1 1 1 1
A cook with a rank R can cook 1 prata in the first R minutes 1 more prata in the next 2R minutes, 1 more prata in 3R minutes and so on (he can only cook a complete prata)
Ans: 12 | 36 | 1
Ans : 15
*/

bool isPossibleSolution(vector<int> &cooksRanks, int nP, int mid) {
    int currP = 0; //initial cooked prata count
    for(int i = 0; i < cooksRanks.size(); i++) {
        int R = cooksRanks[i], j = 1;
        int timeTaken = 0;
        while(true) {
            if(timeTaken + j * R <= mid) {
                ++currP;
                timeTaken += j * R;
                ++j;
            } else {
                break;
            }
        }
        if(currP >= nP) {
            return true;
        }
    }return false;
}

int minTimeToCompleteOrder(vector<int> &cooksRanks, int nP) {
    int start = 0;
    int highestRank = *max_element(cooksRanks.begin(), cooksRanks.end());
    int end = highestRank * (nP * (nP + 1) / 2);
    int ans = -1;
    while(start <= end){
        int mid = start + (end - start) / 2;
        if(isPossibleSolution(cooksRanks, nP, mid)) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return ans;
}

int main() {
    int t;
    cout << "Enter the number of test cases: ";
    cin >> t;
    while(t--) {
        int nP, nL;
        cout << "Enter the number of Prata: ";
        cin >> nP;
        cout << "Enter the number of cook: ";
        cin >> nL;
        vector<int> cooksRanks;
        while(nL--) {  
            int R;
            cin >> R;
            cooksRanks.push_back(R);
        }
        cout << minTimeToCompleteOrder(cooksRanks, nP) << endl;
    }
    return 0;
}

// int main() {
//     int t; cin >> t;
//     while(t--) {
//         int nP, nL;
//         cin >> nP >> nL;
//         vector<int> cooksRanks;
//         while(nL--) {  
//             int R;
//             cin >> R;
//             cooksRanks.push_back(R);
//         }
//         cout << minTimeToCompleteOrder(cooksRanks, nP) << endl;
//     }
//     return 0;
// }