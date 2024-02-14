#include<iostream>
using namespace std;

//Subsequences of a string
void findSubsequences(string str, string output, int index) {
    // base case
    if(index >= str.length()) {
        // ans is already build in the output string
        // print
        cout << "->" << output << endl;
        return;
    }
    char ch = str[index];

    // Recursively call for remaining strings

    // Method - 1
    // exclude
    findSubsequences(str, output, index+1);
    //include
    output.push_back(ch);
    findSubsequences(str, output, index+1); 
    
    /* // Method - 2
    //include
    output.push_back(ch);
    findSubsequences(str, output, index+1); 
    // exclude
    output.pop_back();
    findSubsequences(str, output, index+1);
    */
}

int main() {
    string str = "abc";
    string output = " ";
    int index = 0;
    findSubsequences(str, output, index); 
    return 0;
}