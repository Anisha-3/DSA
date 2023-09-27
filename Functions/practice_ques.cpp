#include<iostream>
#include<math.h>
using namespace std;

float circle_area(int radius){
    float Area = 3.14 * radius * radius;
    return Area;
}

bool checkEven(int n){

    //Normal Method
    // if(n % 2 == 0){
    //     return true;
    // }else{
    //     return false;
    // }

    //Using Bitwise Operator
    if((n & 1) == 0){
        return true;
    }else{
        return false;
    }    
}

long long int fact(long long int n){
    long long int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }return fact;
}

bool checkPrime(int n){
    int i = 2;
    for(i = 2; i < n; i++){
        if(n % i == 0){
            return false;
        }
    }return true;    
}

int createNumberUsingDigits(int numberOfDigits){
    int num = 0;
    for(int i = 0; i < numberOfDigits; i++){
        cout<<"Enter Digit: ";
        int digit;
        cin>>digit;
        num = num * 10 + digit;
        cout << "Number created so far: " << num << endl;
    }return num;
}

int createDgitsUsingNumber(int n){
    while(n){
        int num = n % 10;
        cout << num << " ";
        n /= 10;
    }
}

float convertKMtoMile(float km){
    return (km * 0.621371);
}



int main(){

    /*
    //function to display area of circle
    float radius;
    cin >> radius;
    float area = circle_area(radius);
    cout << "Area of Circle with radius of " << radius << " is: " << area;
    */

    /*
    //Given Number is Even or Odd
    int n;
    cin >> n;
    bool isEven = checkEven(n);
    if(isEven){
        cout << n << " is a Even Number";
    }else{
        cout << n << " is a Odd Number";
    }
    */

    /*
    //Factorial
    int n;
    cin >> n;
    cout << fact(n);
    */

    /*
    //Check if given number is prime or not
    int n;
    cin>>n;
    bool isPrime = checkPrime(n);
    if(isPrime){
        cout << n << " is a Prime Number";
    }else{
        cout << n << " is not a Prime Number";
    }
    */

    /*
    //Print all prime numbers from 1 to N
    int n;
    cin>>n;
    for(int i = 2; i <= n; i++){
        bool isPrime = checkPrime(i);
        if(isPrime){
            cout << i << " ";
        }
    }
    */

    /*
    //Set the kth bit
    int n, k;
    cin >> n >> k;
    int mask = 1 << k;
    int ans = (n | mask);
    cout << ans;
    */

    /*
    //Count all set bits
    int n;
    cin >> n;
    int count = 0;

    //Method 1
    // while(n > 0){
    //     int bit = n % 2;
    //     if(bit == 1){
    //         count++;
    //     }n = n / 2;
    // }cout << count;

    //Method 2
    while(n){
        int bit = (n & 1);
        if(bit){
            count++;
        }n >>=1;        
    }cout << count;
    */

    /*
    //Create Number using Digits
    int numberOfDigits;
    cin >> numberOfDigits;
    int num = createNumberUsingDigits(numberOfDigits);
    cout << "Number created by Digits: " << num;
    */

    /*
    //Print all digits of an Integer
    int n;
    cin >> n;
    createDgitsUsingNumber(n);
    */

    /*
    //Convert KM to Miles
    float km;
    cin >> km;
    float mile = convertKMtoMile(km);
    cout << km << "km contains " << mile << " miles";
    */



    return 0; 
}