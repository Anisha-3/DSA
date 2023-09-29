#include<iostream>
#include<string.h>
using namespace std;

int findLength(char ch[], int size) {
    int length = 0;
    for(int i = 0; i < size; i++) {
        if(ch[i] == '\0'){
            break;
        }else {
            length++;
        }
    }return length;
}

void reverseString(char ch[], int n) {
    int i = 0;
    int j = n - 1;
    while(i <= j) {
        swap(ch[i], ch[j]);
        i++;
        j--;
    }
}

void converToUpperCase(char ch[], int n) {
    int index = 0;
    while(ch[index] != '\0'){
        //check if lowercase, then convert it to upper case
        if(ch[index] >= 'a' && ch[index] <= 'z') {
            ch[index] = ch[index] - 'a' + 'A';
        }
        index++;
    }
}

void replaceWithSpace(char ch[], int n) {
    int index = 0;
    while(ch[index] != '\0') {
        if(ch[index] == '@'){
            ch[index] = ' ';
        }
        index++;
    }
}

bool checkPalindrome(char ch[], int n) {
    // n -> length of string
    int i = 0;
    int j = n - 1;

    while(i <= j){
        if(ch[i] == ch[j]){
            i++;
            j--;
        }else{
            //characters are not same
            return false;
        }
    }
    return true;
}

int main() {
    // char ch[100];
    // //input
    // //cin >> ch;
    // cin.getline(ch, 100);
    // //print
    // cout << ch << endl;

    /*    //     Length of a string
    char ch[100];
    cin.getline(ch, 100);
    int len = findLength(ch, 100);
    cout << "Length of string is: " << len <<endl;

    cout << "Printing Length: " << strlen(ch) << endl;
    */

    /*    //      Reverse a string
    char ch[100];
    cin.getline(ch, 100);
    int len = findLength(ch, 100);
    cout << "Before " << ch << endl;
    reverseString(ch, len);
    cout << "After " << ch << endl;
    */

    /*  //      Convert to Uppercase
    char ch[100];
    cin.getline(ch, 100);
    cout << "Before " << ch << endl;
    converToUpperCase(ch, 100);
    cout << "After " << ch << endl;
    */

    /*   //      Replace @ with space
    char ch[100];
    cin.getline(ch, 100);
    cout << "Before " << ch << endl;
    replaceWithSpace(ch, 100);
    cout << "After " << ch << endl;
    */

    //      Check Palindrome
    char ch[100];
    cin.getline(ch, 100);
    int len = findLength(ch, 100);
    bool isPalindrome = checkPalindrome(ch, len);
    if(isPalindrome) {
        cout << "Valid Palindrome" << endl;
    } else {
        cout << "InValid Palindrome" << endl;
    }


    return 0;
}