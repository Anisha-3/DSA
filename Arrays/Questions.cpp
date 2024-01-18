#include<iostream>
#include<bits/stdc++.h>

using namespace std;

/*
// modify the array in way that all -ve numbers come in left and all +ve numbers come in right side
//METHOD-1
// time complexity - O(n)
void shiftNegativeOneSide(int arr[], int n){
    int j = 0;
    for(int index = 0; index < n; index++){
        if(arr[index] < 0){
            swap(arr[index], arr[j]);
            j++;
        }
    }
}

//METHOD-2 Dutch National Flag 
// time complexity - O(n)
void moveAllNegToLeft(int a[], int n) {
    int l = 0;
    int h = n - 1;
    while(l < h) {
        if(a[l] < 0) {
            l++;
        }
        else if(a[h] > 0) {
            h--;
        }
        else {
            swap(a[l], a[h]);
        }
    }
}

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin>>n;
    int arr[1000];
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    // shiftNegativeOneSide(arr, n);
    moveAllNegToLeft(arr, n);
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;    
    return 0;
}
*/

/*
//                          Find Missing Elements from an Array with Duplicates
//METHOD-1
// Time Complexity - O(n)
void findMissing(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        int index = abs(arr[i]);
        if(arr[index - 1] > 0){
            arr[index - 1] *= -1;
        }
    }
    //all positive indexes are missing
    for(int i = 0; i < n; i++){
        if(arr[i] > 0) {
            cout<<i + 1 << " ";
        }
    }
}

//METHOD-2 - sorting+swapping method
void findMissing_approach2(int arr[], int n) {
    int i = 0;
    int index = arr[i] - 1;
    if(arr[i] != arr[index]){
        swap(arr[i], arr[index]);
    }
    else {
        i++;
    }
    for(int i = 0; i < n; i++) {
        if(arr[i] != i + 1){
            cout << i + 1 << " ";
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin>>n;
    int arr[1000];
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    findMissing(arr, n);  
    return 0;    
}
*/

/*
//                                   Find First Repeating Element
//METHOD-1
int firstRepeated(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        bool isRepeated = false;
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                isRepeated = true;
                return i + 1;
            }
        }
    }
    return -1;
}
//METHOD-2
int firstRepeated2(int arr[], int n) {
    unordered_map<int, int>hash;
    for(int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }
        
    for(int i = 0; i < n; i++) {
        if(hash[arr[i]] > 1) {
            return i + 1;
        }
    }
    return -1;
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    // cout << firstRepeated(arr, n);
    cout << firstRepeated2(arr, n);
    return 0;
}
*/

/*
//                                  Common Elements in 3 sorted array

// T.C: O(n1 + n2 + n3)
// S.C: O(n1)
vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3){
    vector<int>ans;
    set<int>st;
    int i, j, k;
    i = j = k = 0;
    while(i < n1 && j < n2 && k < n3) {
        if(A[i] == B[j] && B[j] == C[k]) {
            // ans.push_back(A[i]);
            st.insert(A[i]);
            i++; j++; k++;
        }
        else if(A[i] < B[j]) {
            i++;
        }
        else if(B[j] < C[k]) {
            j++;
        } 
        else {
            k++;
        }
    }
    for(auto i:st) {
        ans.push_back(i);
    }
    return ans;
}

int main() {
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int A[n1];
    int B[n2];
    int C[n3];
    for (int i = 0; i < n1; i++) cin >> A[i];
    for (int i = 0; i < n2; i++) cin >> B[i];
    for (int i = 0; i < n3; i++) cin >> C[i];
    vector <int> res = commonElements (A, B, C, n1, n2, n3);
    if (res. size () == 0)
        cout << -1;
    for (int i = 0; i < res. size (); i++)
        cout << res[i] << " ";
    cout << endl;
    return 0;
}
*/

/*
//                                      Wave Print a Matrix

void wavePrintMatrix(vector<vector<int>>v) {
    int row = v.size();
    int col = v[0].size();
    for(int startCol = 0; startCol < col; startCol++) {
        // even no. of Col -> Top to Bottom
        if((startCol & 1) == 0) {
            for (int i = 0; i < row; i++) {
                cout << v[i][startCol] << " ";
            }
        }
        else {
            // odd no. of Col -> Bottom to Top
            for (int i = row - 1; i >= 0; i--) {
                cout << v[i][startCol] << " ";
            }
        }
    }
}

int main() {
    vector<vector<int>>v {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
        {17, 18, 19, 20}
    };
    wavePrintMatrix(v);
    return 0;
}
*/

/*
//                                      Spiral Print a Matrix

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int>ans;
    int row = matrix.size();
    int col = matrix[0].size();

    int count = 0;
    int totalElements = row * col;

    int startingRow = 0;
    int endingCol = col - 1;
    int endingRow = row - 1;
    int startingCol = 0;

    while (count < totalElements) {
        // printing starting row
        for(int i = startingCol; i <= endingCol && count < totalElements; i++) {
            ans.push_back(matrix[startingRow][i]);
            count++;
        }
        startingRow++;

        // printing ending col
        for(int i = startingRow; i <= endingRow && count < totalElements; i++) {
            ans.push_back(matrix[i][endingCol]);
            count++;
        }
        endingCol--;

        // printing ending row
        for(int i = endingCol; i >= startingCol && count < totalElements; i--) {
            ans.push_back(matrix[endingRow][i]);
            count++;
        }
        endingRow--;

        // printing starting col
        for(int i = endingRow; i >= startingRow && count < totalElements; i--) {
            ans.push_back(matrix[i][startingCol]);
            count++;
        }
        startingCol++;
    }
    return ans;
}

int main() {
    vector<vector<int>>v {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    spiralOrder(v);
    return 0;
}
*/

/*
//                                  Factorials of large numbers

vector<int> factorial(int N){
    vector<int>ans;
    ans.push_back(1);
    int carry = 0;
    for(int i = 2; i <= N; i++) {
        for(int j = 0; j < ans.size(); j++) {
            int x = ans[j] * i + carry;
            ans[j] = x % 10;
            carry = x / 10;
        }
        while(carry) {
            ans.push_back(carry % 10);
            carry /= 10;
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    int N;
    cin >> N;
    vector<int> result = factorial (N);
    for (int i = 0; i < result. size(); ++i){
        cout << result[i];
    } cout << endl;
    return 0;
}
*/

/*
//                                      Remove Duplicates from Sorted Array
// T.C: O(n)
// S.C: O(1)

int removeDuplicates(vector<int>& nums) {
    int i = 1, j = 0;
    // two pointer approach
    while(i < nums.size()) {
        if (nums[i] == nums[j]) i++;
        else nums[++j] = nums[i++];
        // else {
        //     j++;
        //     nums[j] = nums[i];
        //     i++;
        // }
    }
    return j + 1;
}

int main() {
    vector<int>v {0,0,1,1,1,2,2,3,3,4};
    cout << removeDuplicates(v);
    return 0;
}
*/

/*
//                                      Maximum Average Subarray I
// You are given an integer array nums consisting of n elements, and an integer k.
// Find a contiguous subarray whose length is equal to k that has the maximum average value and return this value.

// Method - 1
// T.C -> O(n^2)
double bruteForce(vector<int>& nums, int &k) {
    int maxSum = INT_MIN;
    int i = 0, j = k - 1;
    while(j < nums.size()) {
        int sum = 0;
        for(int y = i; y <= j; y++) {
            sum += nums[y];
        }
        maxSum = max(maxSum, sum);
        ++j, ++i;
    }
    double maxAvg = maxSum / (double)k;
    return maxAvg;
}

// Method - 2
// Sliding Window - T.C -> O(n)
double slidingWindow(vector<int>& nums, int k) {
    int i = 0, j = k - 1;
    int sum = 0;
    for(int y = i; y <= j; ++y) {
        sum += nums[y];
    }
    int maxSum = sum;
    j++;
    while (j < nums.size()) {
        sum -= nums[i++];
        sum += nums[j++];
        maxSum = max(maxSum, sum);
    }
    double maxAvg = maxSum / (double)k;
    return maxAvg;
}
double findMaxAverage(vector<int>& nums, int k) {
    // return bruteForce(nums, k);
    return slidingWindow(nums, k);
}

int main() {
    vector<int>v {1,12,-5,-6,50,3};
    int k = 4;
    cout << findMaxAverage(v, k);
    return 0;
}
*/

/*
//                                      Rotate array k times

// Method - 1
// void rotate(vector<int>& nums, int k) {
//     int n = nums.size();
//     vector<int>ans(n);

//     for(int index = 0; index <n; index++){
//         int newIndex = (index + k) % n;
//         ans[newIndex] = nums[index];
//     }
//     nums = ans;
// }
void RightRotate(int a[], int n, int k) {
	k = k % n;
	for(int i = 0; i < n; i++) {
        if(i < k) {
            cout << a[n + i - k] << " ";
        }
        else { 
            cout << (a[i - k]) << " ";
        }
	}
	cout << endl;
}

// Method - 2
void Reverse(int arr[], int start, int end) { 
    while (start <= end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void Rotateeletoright(int arr[], int n, int k) { 
    // A)
    k = k % n;
    Reverse(arr, 0, n - 1);
    Reverse(arr, 0, k - 1);
    Reverse(arr, k, n - 1);
    // B)
    // Reverse(arr, 0, n - k - 1);
    // Reverse(arr, n - k, n - 1);
    // Reverse(arr, 0, n - 1);
}
	
int main() {
	int Array[] = { 1, 2, 3, 4, 5 };
	int N = sizeof(Array) / sizeof(Array[0]);
	int K = 3;
    // Method - 1
	// RightRotate(Array, N, K);

    // Method - 2
    Rotateeletoright(Array, N, K);
    cout << "After Rotating the k elements to right ";
    for (int i = 0; i < N; i++)
        cout << Array[i] << " ";
    cout << endl;
    return 0;
}
*/

    
    