#include<iostream>
#include<algorithm>
using namespace std;

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

    /**/
    //key pair or two sum problem
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