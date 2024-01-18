#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void print (vector<int> &v) {
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    } cout << endl;
}

void printvv (vector<vector<int>> &v) {
    for(int i = 0; i < v.size(); i++) {
        vector<int> temp = v[i];
        int a = temp[0];
        int b = temp[1];
        cout << a << " " << b << endl;
    } cout << endl;
}

bool mycomp(int &a, int &b) {
    // return a < b;      // increasing order sorting
    return a > b;      // decreasing order sorting
}

// Good Practice to take by reference rather than making copies as sorting is already a expensive 
// and time consuming process and calling comparator again and again will makes too many copies of 
// vector every time the comparator is called so it is good practice to pass it by reference rather 
// than by value
bool mycompfor1stIndex(vector<int> &a, vector<int> &b) {
    return a[1] < b[1];
}

int main () {
    // vector<int> v = {44, 55, 22, 11, 33};
    // sort(v.begin(), v.end());   // increasing order sorting
    // sort(v.begin(), v.end(), mycomp); 
    // print(v);

    //vector of vector sorting
    vector<vector<int>> v;
    int n;
    cout << "Enter size: ";
    cin >> n;
    for(int i = 0; i < n; i++) {
        int a, b;
        cout << "Enter a, b: ";
        cin >> a >> b;
        vector<int>temp;
        temp.push_back(a);
        temp.push_back(b);
        v.push_back(temp);
    }
    printvv(v);

    cout << "Sorted by first index" << endl;
    sort(v.begin(), v.end(), mycompfor1stIndex);
    printvv(v);

    return 0;
}
