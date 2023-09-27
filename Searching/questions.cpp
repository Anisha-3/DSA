#include<iostream>
using namespace std;

/*
//              find first occurrence of a number in a sorted array
int  findFirstOccurence(int arr[], int n, int target){
    int start = 0;
    int end = n -1;
    int mid = (start+end)/2;
    int ans = -1;

    while (start <= end){
        if(arr[mid] == target){
            ans = mid;
            end = mid - 1;
        }else if(target > arr[mid]){
            //right mai jao
            start = mid + 1;
        }else if(target < arr[mid]){
            //left mai jao
            end = mid - 1;
        }
        mid = (start+end)/2;
    }
    return ans;
}

int main(){
    int arr[] = {10,20,30,30,30,40,50};
    int target = 30;
    int n = 7;

    int ansIndex = findFirstOccurence(arr, n, target);
    if(ansIndex == -1){
        cout<<"Element not found "<<endl;
    }else{
        cout<<"Element found at Index: "<< ansIndex << endl;
    }
    return 0;
}
*/

/*
//              find last occurrence of a number in a sorted array
int  findLastOccurence(int arr[], int n, int target){
    int start = 0;
    int end = n -1;
    int mid = (start+end)/2;
    int ans = -1;

    while (start <= end){
        if(arr[mid] == target){
            ans = mid;
            start = mid + 1;
        }else if(target > arr[mid]){
            //right mai jao
            start = mid + 1;
        }else if(target < arr[mid]){
            //left mai jao
            end = mid - 1;
        }
        mid = (start+end)/2;
    }
    return ans;
}

int main(){
    int arr[] = {30,30,30,30,30,30,70,80,90};
    int target = 30;
    int n = 9;

    int ansIndex = findLastOccurence(arr, n, target);
    if(ansIndex == -1){
        cout<<"Element not found "<<endl;
    }else{
        cout<<"Element found at Index: "<< ansIndex << endl;
    }
    return 0;
}
*/

/*
//              find total occurence
int  findFirstOccurence(int arr[], int n, int target){
    int start = 0;
    int end = n -1;
    int mid = (start+end)/2;
    int ans = -1;

    while (start <= end){
        if(arr[mid] == target){
            ans = mid;
            end = mid - 1;
        }else if(target > arr[mid]){
            //right mai jao
            start = mid + 1;
        }else if(target < arr[mid]){
            //left mai jao
            end = mid - 1;
        }
        mid = (start+end)/2;
    }
    return ans;
}
int  findLastOccurence(int arr[], int n, int target){
    int start = 0;
    int end = n -1;
    int mid = (start+end)/2;
    int ans = -1;

    while (start <= end){
        if(arr[mid] == target){
            ans = mid;
            start = mid + 1;
        }else if(target > arr[mid]){
            //right mai jao
            start = mid + 1;
        }else if(target < arr[mid]){
            //left mai jao
            end = mid - 1;
        }
        mid = (start+end)/2;
    }
    return ans;
}
int findTotalOccurence(int arr[], int n, int target){
    int firstOcc = findFirstOccurence(arr, n, target);
    int lastOcc = findLastOccurence(arr, n, target);
}

int main(){
    int arr[] = {30,30,30,30,30,30,70,80,90};
    int target = 30;
    int n = 9;

    int ans = findTotalOccurence(arr, n, target);
    cout<<"Total Occurence is: "<<ans<<endl;
    return 0;
}
*/

/*
//              find missing element in a sorted array
int findMissingElement(int arr[], int n){
    int s = 0;
    int e = n; // e = n - 1 // for last element
    int mid = s + (e - s)/2;
    int ans = -1;

    while(s <= e){
        int diff = arr[mid] - mid;
        if(diff == 1){
            s = mid + 1;
        }else{
            ans = mid;
            e = mid - 1;
        }mid = s + (e - s)/2;
    }
    // if(ans+1 == 0){
    //     return n+1;
    // } // for last element
    return ans+1;
}

int main(){
    int arr[] = {1,2,3,4,6,7,8,9};
    int n = 8;
    cout<<"Missing Element is: "<<findMissingElement(arr, n);
    return 0;
}
*/

//              peak element in a mountain array

/*
//              Find Pivot Element in rotated and sorted array
//leetcode ques 33
class Solution {
public:
    int findPivotIndex(vector<int>& nums){
        int n = nums.size();
        int s = 0;
        int e = n - 1;
        int mid = s + (e - s)/2;
        while(s <= e){
            if(s == e){
                return s;
            }
            if(mid+1 < n && nums[mid] > nums[mid + 1]){
                return mid;
            }else if(mid-1 >= 0 && nums[mid] < nums[mid-1]){
                return mid - 1;
            }else if(nums[s] > nums[mid]){
                e = mid - 1;
            }else{
                s = mid + 1;
            }
            mid = s + (e - s)/2;
        }
        return -1;
    }

    int binarySearch(vector<int>& nums, int s, int e, int target){
        int mid = s + (e - s)/2;
        while(s <= e){
            if(nums[mid] == target){
                return mid;
            }else if(target > nums[mid]){
                s = mid + 1;
            }else{
                e = mid - 1;
            }mid = s + (e - s)/2;
        }return -1;
    }

    int search(vector<int>& nums, int target) {
        int pivotIndex = findPivotIndex(nums);
        int ans = -1;

        //search in A
        if(target >= nums[0] && target <= nums[pivotIndex]){
            ans = binarySearch(nums, 0, pivotIndex, target);
        }else{
            ans = binarySearch(nums, pivotIndex + 1, nums.size() - 1, target);
        }
        return ans;
    }
};
*/

/*  //Divide a and b using binary search
int getQuotient(int divisor, int dividend){
    int s = 0;
    int e = dividend;
    int ans = -1;
    int mid = s + (e - s)/2;

    while(s <= e){
        if(mid * divisor == dividend){
            return mid;
        }
        if(mid * divisor < dividend){
            //ans
            ans = mid;
            //right
            s = mid + 1;
        }else {
            // left
            e = mid - 1;
        }mid = s + (e - s)/2;
    }return ans;
}

int main(){
    int divisor = 7;
    int dividend = 29;

    int ans = getQuotient(abs(divisor), abs(dividend));

    if((divisor > 0 && dividend < 0) || (divisor < 0 && dividend > 0)){
        ans = 0 - ans;
    }

    cout<<"Final Ans is: " << ans << endl;
    return 0;
}
*/

/* // Binary Search on nearly sorted array 

int searchNearlySorted(int arr[], int n, int target){
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s)/2;
    while(s <= e){
        if(mid - 1 > 0 && arr[mid - 1] == target){
            return mid - 1;
        }
        if(arr[mid] == target){
            return mid;
        }
        if(mid + 1 < n && arr[mid + 1] == target) {
            return mid + 1;
        }

        if(arr[mid] < target){
            s = mid + 2; // + 2 instead of + 1 so that not to compare mid + 1 wala element again
        }
        if(arr[mid] > target){
            e = mid - 2;  // - 2 instead of - 1 so that not to compare mid - 1 wala element again
        }
        mid = s + (e - s)/2;

    }return -1;
}

int main() {
    int arr[] = {20,10,30,50,40,70,60};
    int n = 7;
    int target = 70;

    int targetIndex = searchNearlySorted(arr, n, target);
    if(targetIndex == -1){
        cout<<"Element not found";
    }else {
        cout<<"Element found " << targetIndex <<endl;
    }
    return 0;
}
*/

/* // find the odd occuring element */

int findOddOccuringElement(int arr[], int n) {
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s)/2;
    while(s <= e){
        //single element
        if(s == e){
            return s;
        }
        //odd
        if(mid & 1) {
            //right
            if(mid - 1 > 0 && arr[mid - 1] == arr[mid]){
                s = mid + 1;
            }else {
                //left
                e = mid - 1;
            }
        }
        //even
        else {
            //right
            if(mid + 1 < n && arr[mid] == arr[mid + 1]){
                s = mid + 2;
            }else {
                //ya tho right part pe khada hu ya ans ke upr khada hu
                e = mid;
            }
        }mid = s + (e - s)/2;
    }return -1;
}

int main() {
    int arr[] = {10,10,2,2,3,3,2,5,5,6,6,7,7};
    int n = 13;

    int ans = findOddOccuringElement(arr, n);
    cout<<"Final ans is: "<<arr[ans];

    return 0;
}