#include<iostream>
using namespace std;

int main() {

    /* // Output = 2.5 2.5 2.5
    float f = 10.5;
    float p = 2.5;
    float* ptr = &f;
    (*ptr)++;
    *ptr = p;
    cout << *ptr << " " << f << " " << p;
    */

   /*  // Output = 7 7
    int a = 7;
    int b = 17;
    int *c = &b;
    *c = 7;
    cout << a << " " << b;
    */

    /* // Output = Run Time Error 
    int *ptr = 0;
    int a = 10;
    *ptr = a;
    cout << *ptr << endl;
    */

    /**/
    int arr[] = {4,5,6,7};
    int *p = (arr+1);
    cout << *arr + 9;
    return 0;
}