#include<iostream>
using namespace std;

int f(int x, int *py, int **ppz) {
    int y, z;
    **ppz += 1;
    z = **ppz;
    *py += 2;
    y = *py;
    x += 3;
    return x+y+z;

}

void modifyArray(int arr[], int size){
    for(int i = 0; i < size; i++) {
        arr[i] *= 2;
    }
}

void modify_value(int* ptr) {
    (*ptr) *= 2;
}

void modify_arr(int* arr, int size) {
    for(int i = 0; i < size; i++){
        modify_value(&arr[i]);
    }
}

int main() {
    // int a = 5;
    // cout << "Address of a " << &a << endl;


    // // creating pointer
    // int * ptr = &a;
    // cout << "Address of ptr " << &ptr << endl;
    // cout << "value of ptr " << ptr << endl;
     
    // //accessing value stored at address stored in ptr
    // cout << "Value of variable is: " << *ptr << endl;

    // cout << "Size of " << sizeof(ptr) << endl;


    // char ch = 's';
    // char * cptr = &ch;

    // cout << "Size of " << sizeof(cptr) << endl;

    // long lg = 10;
    // long * lptr = &lg;

    // cout << "Size of " << sizeof(lptr) << endl;

    // int a = 100;
    // int *ptr = &a;
    // cout<<ptr<<endl;
    // a=a+1;
    // ptr=ptr+1;
    // cout<<a << endl;
    // cout<<ptr << endl;

    // int a = 100;
    // int *ptr = &a;
    // cout<<a<<endl;
    // cout<<&a<<endl;
    // //cout<<*a<<endl; // error
    // cout<<ptr<<endl;
    // cout<<&ptr<<endl;
    // cout<<*ptr<<endl;
    // cout<<(*ptr)++<<endl;
    // cout<<++(*ptr)<<endl;
    // *ptr = *ptr/2;
    // cout<<*ptr<<endl;
    // *ptr = *ptr-2;
    // cout<<*ptr<<endl;

    // int a = 5;
    // int *ptr = &a;
    // cout<<a<<endl;
    // cout<<&a<<endl;
    // cout<<ptr<<endl;
    // cout<<&ptr<<endl;
    // cout<<*ptr<<endl;
    // int *q = ptr;
    // cout<<q<<endl;
    // cout<<&q<<endl;
    // cout<<*q<<endl;


    // int arr[5] = {10,20,30,40,50};
    // cout << 2[arr]; // it is same as arr[2] both are correct as inside it works as (*(arr+i)) = arr[i] or (*(i+arr)) = i[arr] both are same

    // int a = 5;
    // int* p = &a;
    // p = p + 1;
    // cout << *p;

    // char ch = 'b';
    // char *cptr = &ch;
    // cout << cptr;  // it will print b and then some random values till null character occurs

    // int arr[5] = {1,2,3,4,5};
    // // Pointer to an array
    // int* ptr1 = arr;
    // int (*ptr)[5] = &arr; 
    
    // int c, *b, **a;
    // c = 4;
    // b = &c;
    // a = &b;
    // cout << f(c, b, a);


    // int ***r, **q, *p, i = 8;
    // p = &i;
    // (*p)++;
    // q = &p;
    // (**q)++;
    // r = &q;
    // cout << *p <<" " << **q <<" " << ***r;

    // char st[] = "ABCD";
    // for(int i = 0; st[i] != '\0'; i++) {
    //     cout << st[i] << *(st) + i << *(i+st) << i[st];
    // }

    // int  p=5;
    // int const *q = &p;
    // p++;
    // cout << p;

    // int a=32, *ptr=&a;
    // char ch = 'A', &cho=ch;
    // cho+=a;
    // *ptr+=ch;
    // cout << a << "," << ch;

    // int num[5];
    // int* p;
    // p = num;
    // *p = 10;
    // p++;
    // *p = 20;
    // p = &num[2];
    // *p = 30;
    // p = num + 3;
    // *p = 40;
    // p = num;
    // *(p+4) = 50;
    // for(int i = 0; i < 5; i++) {
    //     cout << num[i] << ",";
    // }


    /*
    int x=5;
    int* ptr= &x;

    int y=10;
    int* ptr2= &y;

    int** ptr_ptr = &ptr;
    int*** ptr_ptr_ptr = &ptr_ptr;

    modify_value(*ptr_ptr);
    modify_value(**ptr_ptr_ptr);
    modify_value(ptr2);

    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

    int arr[] = {1,2,3,4,5};
    int* arr_ptr = arr;
    modify_arr(arr_ptr,5);

    for(int i=0;i<5;i++){
        cout<<arr[i] <<" ";
    } cout << endl;
    */


    return 0;
}