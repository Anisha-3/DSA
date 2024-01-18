#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void print(vector<int>v){
    int size = v.size();
    for(auto it: v){
        cout<<it<<" ";
    }
    cout<<endl;
}

//                                          key pair or two sum problem
/*
int keyPair(int arr[], int n, int x){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] + arr[j] == x){
                cout << "Pair found: ("<< arr[i] <<" , "<< arr[j] <<")" << endl ;
            }
        }
    }
}

bool keyPair_2PointerApproach(int arr[], int n, int x){
    int l = 0;
    int h = n - 1;
    while(l < h){
        int csum = arr[l] + arr[h];
        if(csum == x) return true;
        else if(csum > x){
            h--;
        }else{
            l++;
        }
    }return false;
}

int main() {
    int n;
    cin >> n;
    int x;
    cout << "Enter the sum you want to find pairs for: ";
    cin >> x;
    int arr[1000];
    cout << "Enter the elements of an array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    //method - 1
    keyPair(arr, n, x);
    //method - 2
    sort(arr, arr + n);
    bool ans = keyPair_2PointerApproach(arr, n, x);
    if(ans){
        cout<<"True";
    }else{
        cout<<"false";
    }
    return 0;
}
*/

//                                          Find pivot index
/*
int bruteforce(vector<int>& nums) {
    for(int i = 0; i < nums.size(); i++) {
        int lsum = 0;
        int rsum = 0;

        //find left sum excluding current index
        for(int j = 0; j < i; j++) {
            lsum += nums[j];
        }
        //find right sum excluding current index
        for(int j = i+1; j < nums.size(); j++) {
            rsum += nums[j];
        }

        if (lsum == rsum) {
            return i;
        }
    }   
    return -1;
}

int prefixSumApproach(vector<int>& nums) {
    vector<int>lsum(nums.size(), 0);
    vector<int>rsum(nums.size(), 0);

    //cal lsum array
    for(int i = 1; i < nums.size(); i++) {
        lsum[i] = lsum[i-1] + nums[i-1];
    }

    //cal rsum array
    for(int i = nums.size()-2; i >= 0; --i) {
        rsum[i] = rsum[i+1] + nums[i+1];
    }

    //check
    for(int i = 0; i < nums.size(); i++) {
        if(lsum[i] == rsum[i]) {
            return i;
        }
    }
    return -1;
}


// test case : {1,7,3,6,5,6}
int main () {
    vector<int> nums;
    int n, i, d;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for(i = 0; i < n; i++) {
        cin >> d;
        nums.push_back(d);
    }
    
    // cout << bruteforce(nums);
    cout << prefixSumApproach(nums);
    return 0;
}
*/

/*
//                                          Sort Colors/Sort an array of 0, 1 & 2 
void counting_approach(vector<int>& nums){
    int zeros, ones,twos;
    zeros = ones = twos = 0;
    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] == 0) {
            zeros++;
        }
        else if(nums[i] == 1) {
            ones++;
        }
        else {
            twos++;
        }
    }

    int i = 0;
    while(zeros--) {
        nums[i] = 0;
        i++;
    }
    while(ones--) {
        nums[i] = 1;
        i++;
    }
    while(twos--) {
        nums[i] = 2;
        i++;
    }
}

void sortColors(vector<int>& nums) {
    int n = nums.size();
    int left = 0;
    int right = n - 1;
    int index;
    while(index <= right){
        if(nums[index] == 0){
            swap(nums[index],nums[left]);
            left++;
            index++;
        }else if(nums[index] == 2){
            swap(nums[index],nums[right]);
            right--;
        }else{
            index++;
        }
    }
}

int main () {
    vector<int> nums;
    int n, i, d;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for(i = 0; i < n; i++) {
        cin >> d;
        nums.push_back(d);
    }
    // counting_approach(nums);
    sortColors(nums);
    print(nums);
    return 0;
}
*/

/*
//                                          Missing Number
//METHOD-1
int missingNumber(vector<int>& nums) {
    int sum = 0;
    int n = nums.size();
    for(int index = 0; index < n; index++){
        sum += nums[index];
    }
    int totalSum = ((n)*(n+1))/2;
    int ans = totalSum - sum;
    return ans;
}
//METHOD-2
int xorr(vector<int>& nums) {
    int ans = 0;
    for(int i = 0; i < nums.size(); i++) {
        ans ^= nums[i];
    }
    int n = nums.size();
    for(int i = 0; i <= n; i++) {
        ans ^= i;
    }
    return ans;
}

int main () {
    vector<int> nums;
    int n, i, d;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for(i = 0; i < n; i++) {
        cin >> d;
        nums.push_back(d);
    }
    cout<<"Missing Number is : ";
    // cout <<  missingNumber(nums);
    cout << xorr(nums);
    return 0;
}
*/

/*
//                                          Find the Duplicate Number
// METHOD-1 - array is modified in this approach
//Time Complexity = O(n)
int findDuplicate(vector<int>& nums) {
    int ans = -1;
    for(int i = 0; i < nums.size(); i++) {
        int index = abs(nums[i]);
        //check if it is already visited
        if(nums[index] < 0) {
            ans = index;
            break;
        }
        //mark visited
        nums[index] *= -1;
    }
    return ans;
}

int findDuplicatePositioning(vector<int>& nums) {
    while(nums[0] != nums[nums[0]]) {
        swap(nums[0], nums[nums[0]]);
    }
    return nums[0];
}

int main () {
    vector<int> nums;
    int n, i, d;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for(i = 0; i < n; i++) {
        cin >> d;
        nums.push_back(d);
    }
    cout << "The duplicate element is: ";
    // cout << findDuplicate(nums);
    cout << findDuplicatePositioning(nums);
    return 0;
}
*/




