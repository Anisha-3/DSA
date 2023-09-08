#include<iostream>
using namespace std;


/*Max of three numbers
void maxNum(int a, int b, int c){
    if(a > b && a > c){
        cout<<"Max is: "<<a;
    }else if(b > a && b > c){
        cout <<"Max is: "<<b;
    }else{
        cout <<"Max is: "<<c;
    }
}
*/

/*Prime number or not*/
bool checkPrime(int n){
    for(int i=2; i<n; i++){
        if(n%i == 0){
            return false;
        }
    }return true;
}

int main(){
    //function call
    //maxNum(1,8,3);
    bool prime = checkPrime(1);
    if(prime){
        cout<<"its a prime number.";
    }else{
        cout<<"its not a prime number.";
    }
    return 0;
}