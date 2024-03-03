#include<iostream>
#include<algorithm>
using namespace std;

void printPermutation(string &str, int index){
    // base case
    if(index >= str.length()) {
        cout << str << " ";
        return;
    }

    for(int j = index; j < str.length(); j++) {
        swap(str[index], str[j]);
        // recursion
        printPermutation(str, index+1);
        // backtracking
        swap(str[index], str[j]); // we are performing this action to nullify the effect of recursion as we are sending reference of the string so when we perform recursion it changes the original string and while backtracking we don't get the original string we got the changed string so we did this to nullify the effect of the recursion
    }

}

int main() {
    string str = "abc";
    int index = 0;
    printPermutation(str, index);
    return 0;
}