//      Question 1
// #include<iostream>
// using namespace std;

// int main() {
// 	char c;
//     cin>>c;
//     if('a' <= c && c <= 'z'){
//         cout<<0;
//     }
// 	else if('A' <= c && c <= 'Z'){
//         cout<<1;
//     }
//     else{
//         cout<<-1;
//     }
// }


/*      Question 2
Pattern
1
23
345
4567

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<n){
        int j = i,count = 0;
        while(count<i){
            cout<<j;
            j++;
            count++;
        }
        cout<<"\n";
        i++;
    }
}
*/



/*      Question 3
Pattern
N = 4
   *
  ***
 *****
*******

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int count = 2*n-1,gaps=(n-i),k=1;
        while(k<=gaps){
            cout<<" ";
            k++;
        }
        int m = 1,ch = count - 2*gaps;
        while(m<=ch){
            cout<<"*";
            m++;
        }
        k = 1;
        while(k<=gaps){
            cout<<" ";
            k++;
        }
        cout<<endl;
        i++;
    }
}
*/


/*      Question 4
Pattern
N = 4
1
22
333
4444

#include<iostream>
using namespace std;

int main(){
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
	        cout<<i;
        }cout<<endl;
    }
}
*/


/*      Question 5
Pattern
N = 4
1
21
321
4321

#include<iostream>
using namespace std;

int main(){
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
        int p = i;
        for(j=1;j<=i;j++){
          cout<<p;
          p--;
        }
        cout<<endl;
    }
}
*/


/*      Question 6
Pattern
N = 5
E
DE
CDE
BCDE
ABCDE

#include<iostream>
using namespace std;

int main() {
    int i,j,n;;
    cin>>n;
    for(i=1;i<=n;i++){
        char p='A'+ n - i;
        for(j=1;j<=i;j++){
            cout<<p;
            p++;  
        }
        cout<<endl;
    }
}
*/


/*      Question 7
Pattern
N = 4
   1
  232
 34543
4567654

#include<iostream>
using namespace std;
int main(){
    int no;
    cin>>no;
    int i=1;
    int n = 2*no - 1;
    while(i<=(no)){
        int gaps = n-2*i+1,k=1;
        int j = i;
        while(k<=gaps/2){
            cout<<" ";
            k++;
        }
        int ch = n - gaps, z = (ch+1)/2;
        while(z>=1){
            cout<<j;
            j++;
            z--;
        }
        j--;
        z = (ch-1)/2;
        while(z>=1){
            j--;
            cout<<j;
            z--;
        }
        k = 1;
        while(k<=gaps/2){
            cout<<" ";
            k++;
        }
        cout<<endl;
        i++;
    }
}
*/
