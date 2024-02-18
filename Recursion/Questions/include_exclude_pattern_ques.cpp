#include<iostream>
#include<math.h>
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

/*
// METHOD - 3
void subsq(string &s) {
    int num_subs = pow(2, s.size());    // no. of subsequence

    for(int n = 0; n < num_subs; n++) {
        string out;
        int num = n;

        int i = 0;
        // convert num to binary
        while(num) {
            int b = (num & 1);
            if(b) {
                out.push_back(s[i]);
            }
            ++i;
            num >>= 1;   // right shift by one bit
        }
        cout << out << endl;
    }
}
*/

int main() {
    string str = "abc";
    string output = " ";
    int index = 0;
    findSubsequences(str, output, index);
    cout << endl; 
    //subsq(str);
    return 0;
}