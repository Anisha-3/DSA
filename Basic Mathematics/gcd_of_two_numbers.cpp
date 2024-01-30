#include<iostream>
using namespace std;

/*
GCD(Greatest Common Divisor)/ HCF(Highest Common Factor)
1. Euclid's Algorithm to find GCD => 
    a) gcd(a,b) = gcd(a-b, b) when  a > b or gcd(b-a, a) when b > a. We'll apply this formula till the value of one parameter becomes 0. Once the one parameter is zero the answer or gcd will be the value of the other parameter
        Eg: gcd(72,24) => gcd(48,24) => gcd(24,24) => gcd(0,24) => Ans - 24
    b) gcd(a,b) = gcd(a % b, b) when  a > b
2. LCM(a,b) * gcd(a,b) = a * b
*/

int gcd(int A, int B) { 
	if(A == 0) return B;
	if(B == 0) return A;
	    
	while(A > 0 && B > 0) {
	    if(A > B) {
	        A = A - B;
        } else {
	        B = B - A;
	    }
	}
	return A == 0 ? B : A;
} 

int main() {
    int a, b;
    cin >> a >> b;
    cout << "The GCD of "<< a <<" and "<< b <<" is "<< gcd(a, b) << endl;
    return 0;
}
