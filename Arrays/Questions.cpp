#include<iostream>
using namespace std;

// modify the array in way that all -ve numbers come in left and all +ve numbers come in right side

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

int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    shiftNegativeOneSide(arr, n);
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;    
    return 0;
}