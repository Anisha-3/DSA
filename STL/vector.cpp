#include<iostream>
#include<vector>
using namespace std;

//In vector, don't tell size of a vector just keep inserting the elements, it'll manage the allocstions

void print(vector<int>v){
    int size = v.size();
    cout<<"Printing Vector"<<endl;
    for(int i = 0; i < size; i++){
        // cout<<v.at(i)<<" ";
        cout<<v[i]<<" ";
    }cout<<endl;
}

void print2(vector<int>v){
    int size = v.size();
    cout<<"Printing Vector method 2"<<endl;
    for(auto it: v){
        cout<<it<<" ";
    }
    cout<<endl;
}



int main(){

    //vector initialization
    vector<int>v;   //default with no data, 0 size
    vector<int>arr(5, -1); // init with n size with specific data
    //arr.push_back(50);
    //print(arr);
    vector<int>arr2 = {1, 2, 3, 4, 5};
    //arr2.pop_back();
    //print(arr2);
    vector<int>arr3{1, 2, 3, 4, 5};
    //print(arr3);

    //insert
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // print(v);

    //pop -> delete -> end
    // v.pop_back();
    // print(v);

    // v.pop_back();
    // print(v);

    // v.pop_back();
    // print(v);

    // int n;
    // cin>>n;
    // for(int i = 0; i < n; i++){
    //     int d;
    //     cin>>d;
    //     v.push_back(d);
    // }
    // print(v);

    // // to clear a vector
    // v.clear();

    // print(v);

    //copy vector
    // vector<int>arr4 = {1,2,3,4,5};
    // vector<int>arr5(arr4);
    // print(arr5);


    // vector<char>vc;
    // v.push_back('a');
    // v.push_back('b');
    // v.push_back('c');

    // cout<<"Front element: "<<vc.front()<<endl;
    // cout<<"End element: "<<vc.back()<<endl;

    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // v.push_back(40);
    // print(v);
    // print2(v);



    //2d vector
    // vector<vector<int> > vec;
    // vector<vector<int> > arr8 (5, vector<int>(10,-1));

    // for(int i = 0; i < arr8.size(); i++){
    //     for(int j = 0; j < arr8[i].size(); j++){
    //         cout<<arr8[i][j]<<" ";
    //     }cout<<endl;
    // }

    //jagged array
    vector<vector<int> > brr;

    vector<int>vec1(10,0);
    vector<int>vec2(5,1);
    vector<int>vec3(7,0);
    vector<int>vec4(8,1);
    vector<int>vec5(20,0);


    brr.push_back(vec1);
    brr.push_back(vec2);
    brr.push_back(vec3);
    brr.push_back(vec4);
    brr.push_back(vec5);


    for(int i = 0; i < brr.size(); i++){
        for(int j = 0; j < brr[i].size(); j++){
            cout<<brr[i][j]<<" ";
        }cout<<endl;
    }


    











    return 0;
}