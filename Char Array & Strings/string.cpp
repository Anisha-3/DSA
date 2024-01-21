#include<iostream>
#include<string.h>
using namespace std;

int main() {
    // creation
    // string name;
    // //input
    // // cin >> name;
    // getline(cin, name);
    // //print
    // cout << name << endl;
    // // cout << "Printing first character: " << name[0] << endl;
    //                      MEMBER FUNCTION OF STRING

    //          LENGTH
    // cout << "Length of string: " << name.length() << endl;

    //          EMPTY
    // cout << "Name string is empty or not? " << name.empty() << endl;
    // string temp = "";
    // cout << "Temp string is empty or not? " << temp.empty() << endl;

    //          AT
    // cout << "Character at 0th index of name string is: " << name.at(0) << endl;

    //          FRONT
    // cout << "Front character of name string is: " << name.front() << endl;

    //          BACK
    // cout << "Back character of name string is: " << name.back() << endl;

    //          APPEND
    // string str1 = "Anisha";
    // string str2 = "Asnani";
    // cout << "Before Appending: " << str1 << endl;
    // str1.append(str2);
    // cout << "After Appending: " << str1 << endl;

    //          ERASE
    // string desc = "This is a car";
    // desc.erase(4, 3); //remove 3 characters from 4th index
    // cout << desc << endl;

    //          INSERT
    // string name = "Ms. Asnani";
    // string middle = "Anisha ";
    // name.insert(7, middle); // it will insert the middle string at the 7th index
    // cout << "Printing name: " << name << endl;

    //          PUSH_BACK & POP_BACK
    // string name = "Anisha";
    // cout << name << endl;
    // name.push_back('A');
    // cout << name << endl;
    // name.pop_back();
    // cout << name << endl;

    //          FIND
    // string str1 = "yaar tera super star desi kalakar";
    // string str2 = "star";
    // if(str1.find(str2) == string::npos) {
    //     // not found
    //     cout << "Not Found!!" << endl;
    // } else {
    //     cout << "Found" << endl;
    // }

    //          COMPARE
    // string str1 = "Anisha";
    // string str2 = "Asnani";
    // if(str1.compare(str2) == 0) {
    //     cout << "Matching" << endl;
    // } else {
    //     cout << "Not Matching" << endl;
    // }

    //          SUBSTR
    string desc = "This is a car, big daddy of all suvs";
    cout << desc.substr(19, 5) << endl; // it will print substring of length 5 from the 19th index of desc string

    return 0;
}