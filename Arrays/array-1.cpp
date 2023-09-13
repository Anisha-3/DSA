#include<iostream>
using namespace std;

void reverseArray(int arr[], int n){

    //Method-1
    int left = 0;
    int right = n - 1;
    while(left <= right){
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
    
    //Method-2
    // for(int left = 0, right = n - 1; left <= right; left++, right--){
    //     swap(arr[left], arr[right]);
    // }
}

void extremePrint(int arr[], int n){
    int left = 0;
    int right = n - 1;
    while(left <= right){
        if(left == right){
            cout<< arr[left] << " ";
        }else{
            cout<< arr[left] << " " << arr[right] << " ";
        }
        left++;
        right--;
    }
}

void printArray(int arr[], int n){
    cout<<"Printing Extremes of an array: ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main(){

    /* //     Reverse an array
    int n;
    cin>>n;
    int arr[1000];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }cout<<"Before reversing an array: ";
    printArray(arr, n);
    reverseArray(arr, n);
    cout<<"After reversing an array: ";
    printArray(arr, n);
    */

    //      Printing extremes in an array

    int n;
    cin>>n;
    int arr[1000];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    extremePrint(arr, n);



    return 0;
}