#include<iostream>
using namespace std;

//Binary Search is always done on a sorted array

int binarySearch(int arr[], int n, int target){
    int start = 0;
    int end = n - 1;
    //int mid = (start+end)/2;  //There are chances that integer can overflow
    int mid = start + (end - start)/2;  //There are no chances that integer can overflow

    while(start <= end){
        if(arr[mid] == target){
            return mid;
        }else if(target > arr[mid]){
            //right mai jao
            start = mid + 1;
        }else if(target < arr[mid]){
            //left mai jao
            end = mid - 1;
        }
        //mid update
        mid = (start+end)/2;
    }return -1;
}

int main(){
    
    int arr[] = {10,20,30,40,50,60,70,80,90};
    int target = 90;
    int n = 9;

    int ansIndex = binarySearch(arr, n, target);
    if(ansIndex == -1){
        cout<<"Element not found "<<endl;
    }else{
        cout<<"Element found at Index: "<< ansIndex << endl;
    }
    return 0;
}