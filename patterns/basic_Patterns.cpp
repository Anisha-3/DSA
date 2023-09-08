#include<iostream>
using namespace std;

int main(){
    //      Square pattern
    // for(int i = 0; i < 4; i++){
    //     for(int j = 0; j < 4; j++){
    //         cout<<"* ";
    //     }cout<<endl;
    // }

    //    Rectangle Pattern   
    // for(int i = 0; i < 3; i++){
    //     for(int j = 0; j < 5; j++){
    //         cout<<"* ";
    //     }cout<<endl;
    // }

    //      Hollow Square/Rectangle Pattern
    // int ROWS,COLS;
    // cout<<"Enter the number of rows and columns: ";
    // cin>>ROWS>>COLS;
    // for(int row = 0; row < ROWS; row++){
    //     for(int col = 0; col < COLS; col++){
    //         if(row == 0 || row == ROWS-1){
    //             cout<<"* ";
    //         }else{
    //             if(col == 0 || col == COLS-1){
    //                 cout<<"* ";
    //             }else{
    //                 cout<<"  ";
    //             }
    //         }
    //     }cout<<endl;
    // }

    //      Half Pyramid
    // int n;
    // cin>>n;
    // for(int row = 1; row <= n; row++){
    //     for(int col = 0; col < row; col++){
    //         cout<<"* ";
    //     }cout<<endl;
    // }

    //      Inverted Half Pyramid
    // int n;
    // cin>>n;
    // for(int row = 0; row <= n; row++){
    //     for(int col = 0; col < n-row; col++){
    //         cout<<"* ";
    //     }cout<<endl;
    // }

    //      Numeric Half Pyramid
    // int n;
    // cin>>n;
    // for(int row = 0; row < n; row++){
    //     for(int col = 1; col <= row+1; col++){
    //         cout<<col<<" ";
    //     }cout<<endl;     
    // }

    //      Inverted Numeric Half Pyramid
    // int n;
    // cin>>n;
    // for(int row = 0; row < n; row++){
    //     for(int col = 1; col <= n-row; col++){
    //         cout<<col<<" ";
    //     }cout<<endl;     
    // }


    //      Hollow Inverted Half Pyramid
    // int n;
    // cin>>n;
    // for(int row = 0; row <= n; row++){
    //     for(int col = 0; col < n-row; col++){
    //         if(row == 0 || row == n-col){
    //             cout<<"* ";
    //         }else{
    //             if(col == 0 || col == n-row-1){
    //                 cout<<"* ";
    //             }else{
    //                 cout<<"  ";
    //             }
    //         }
    //     }cout<<endl;
    // }


    //       Full Pyramid
    // int n;
    // cin>>n;
    // for(int row = 0; row < n; row++){
    //     int k = 0;
    //     for(int col = 0; col < (2*n)-1; col++){
    //         if(col < (n-row-1)){
    //             cout<<" ";
    //         }else if(k < (2*row+1)){
    //             cout<<"*";
    //             k++;
    //         }else{
    //             cout<<" ";
    //         }
    //     }cout<<endl;
    // }

    //      Hollow Full Pyramid
    // int n;
    // cin>>n;
    // for(int row = 0; row < n; row++){
    //     int k = 0;
    //     for(int col = 0; col < (2*n)-1; col++){
    //         if(col < (n-row-1)){
    //             cout<<" ";
    //         }else if(k < 2*row+1){
    //             if(k==0 || k==2*row || row == n-1){
    //                 cout<<"*";
    //             }else{
    //                 cout<<" ";
    //             }
    //             k++;
    //         }else{
    //             cout<<" ";
    //         }
    //     }cout<<endl;
    // }

    
    //      Inverted Full Pyramid
    // int n;
    // cin>>n;
    // for(int row = 0; row < n; row++){
    //     //spaces
    //     for(int col = 0; col < row; col++){
    //         cout<<" ";
    //     }
    //     //stars
    //     for(int col = 0; col < n-row; col++){
    //         cout<<"* ";
    //     }cout<<endl;
    // }


    //      Diamond Pattern
    // int num;
    // cin>>num;
    // int n = num/2;
    // for(int row = 0; row < n; row++){
    //     //spaces
    //     for(int col = 0; col < n-row-1; col++){
    //         cout<<" ";
    //     }
    //     //stars
    //     for(int col = 0; col < row+1; col++){
    //         cout<<"* ";
    //     }cout<<endl;
    // }
    // for(int row = 0; row < n; row++){
    //     //spaces
    //     for(int col = 0; col < row; col++){
    //         cout<<" ";
    //     }
    //     //stars
    //     for(int col = 0; col < n-row; col++){
    //         cout<<"* ";
    //     }cout<<endl;
    // }

    // int n;
    // cin>>n;
    // for(int row = 0; row < n; row++){
    //     for(int col = 0; col < n-row-1; col++){
    //         cout<<" ";
    //     }for(int col = 0; col < row+1; col++){
    //         if(col == 0 || col == row+1-1){
    //             cout<<"* ";
    //         }else{
    //             cout<<"  ";
    //         }
    //     }cout<<endl;
    // }


    // int n;
    // cin>>n;
    // for(int row = 0; row < n; row++){
    //     for(int col = 0; col < row; col++){
    //         cout<<" ";
    //     }for(int col = 0; col < n-row; col++){
    //         if(col == 0 || col == n-row-1){
    //             cout<<"* ";
    //         }else{
    //             cout<<"  ";
    //         }
    //     }cout<<endl;
    // }


    //          Hollow Diamond 
    // int n;
    // cin>>n;
    //    for(int row = 0; row < n; row++){
    //     for(int col = 0; col < n-row-1; col++){
    //         cout<<" ";
    //     }for(int col = 0; col < row+1; col++){
    //         if(col == 0 || col == row+1-1){
    //             cout<<"* ";
    //         }else{
    //             cout<<"  ";
    //         }
    //     }cout<<endl;
    // }
    // for(int row = 0; row < n; row++){
    //     for(int col = 0; col < row; col++){
    //         cout<<" ";
    //     }for(int col = 0; col < n-row; col++){
    //         if(col == 0 || col == n-row-1){
    //             cout<<"* ";
    //         }else{
    //             cout<<"  ";
    //         }
    //     }cout<<endl;
    // }

    
    //Bilibed solid pattern
    // int num;
    // cin>>num;
    // int n = num/2;
    // for(int row = 0; row < n; row++){
    //     for(int col = 0; col < n-row; col++){
    //         cout<<"*";
    //     }for(int col = 0; col < 2*row+1; col++){
    //         cout<<" ";
    //     }for(int col = 0; col < n-row; col++){
    //         cout<<"*";
    //     }cout<<endl;
    // }
    // for(int row = 0; row < n; row++){
    //     for(int col = 0; col < row+1; col++){
    //         cout<<"*";
    //     }for(int col = 0; col < 2*(n-row)-1; col++){
    //         cout<<" ";
    //     }for(int col = 0; col < row+1; col++){
    //         cout<<"*";
    //     }cout<<endl;
    // }

    /*
    1
    2 * 2
    3 * 3 * 3
    4 * 4 * 4 * 4
    
    int n;
    cin>>n;
    for(int row = 0; row < n; row++){
        for(int col = 0; col < 2*row+1; col++){
            if(col%2!=0){
                cout<<"*";
            }else{
                cout<<row+1;
            }
        }cout<<endl;
    }
    */

    //Hollow Inverted Half Pyramid
    // int n;
    // cin>>n;
    // for(int row = 0; row < n; row++){
    //     for(int col = 0; col < n - row; col++){
    //         if(col == 0 || col == n - row - 1 || row == 0 || row == n - 1){
    //             cout<<"* ";
    //         }else{
    //             cout<<"  "; 
    //         }
    //     }cout<<endl;
    // }

    // int n;
    // cin>>n;
    // for(int row = 0; row < n; row++){
    //     char ch;
    //     for(int col = 0; col < row + 1; col++){
    //         ch = col + 1 + 'A' - 1;
    //         cout<<ch;
    //     }
        
    //     for(char alphabet=ch; alphabet>'A'; ){
    //         alphabet--;
    //         cout<<alphabet;
    //     }
        
    //     cout<<endl;
    // }

    //      Numeric Hollow half Pyramid

    // int n;
    // cin>>n;
    // for(int row = 0; row < n; row++){
    //     for(int col = 1 ; col <= row+1; col++){
    //         if(col==1 || col==row+1 || row==n-1){
    //             cout<<col<<" ";
    //         }else{
    //             cout<<"  ";
    //         }
    //     }cout<<endl;
    // }

    //      Numeric Hollow Inverted Half Pyramid
    // int n;
    // cin>>n;
    // for(int row = 0 ; row < n; row++){
    //     for(int col = row+1; col <= n; col++){
    //         if(row == 0 || col == row+1 || col == n){
    //             cout<<col<<" ";
    //         }else{
    //             cout<<"  ";
    //         }
    //     }cout<<endl;
    // }

    //      Numeric Palindrome Equilateral Pyramid
    // int n;
    // cin>>n;
    // int k = n;
    // for(int row = 0; row < n; row++){
    //     int c = 1;
    //     for(int col = 0; col < k; col++){
    //         if(col < n-row-1){
    //             cout<<"  ";
    //         }else if(col <= n-1){
    //             cout<<c<<" ";
    //             c++;
    //         }else if(col == n){
    //             c -= 2;
    //             cout<<c<<" ";
    //             c--;
    //         }else{
    //             cout<<c<<" ";
    //             c--;
    //         }
    //     }k++;
    //     cout<<endl;
    // }


    //      Solid Half Diamond
    // int n; 
    // cin>>n;
    // for(int row = 0; row < 2*n-1; row++){
    //     int cond = 0;
    //     if(row < n){
    //         cond = row;
    //     }else{
    //         cond = n - (row % n) - 2;
    //     }
    //     for(int col = 0; col <= cond; col++){
    //         cout<<"* ";
    //     }cout<<endl;
        
    // }


    /*
    ********1********
    *******2*2*******
    ******3*3*3******
    *****4*4*4*4*****
    ****5*5*5*5*5****    
    
    int n;
    cin>>n;
    if(n > 9){
        cout<<"Please put value <= 9. ";
        return 0;
    }
    for(int row = 0; row < n; row++){
        int start_num_index = 8 - row;
        int num = row + 1;
        int count_num = num;
        for(int col = 0; col < 17; col++){
            if(col == start_num_index && count_num > 0){
                cout<<num<<" ";
                start_num_index += 2;
                count_num--;
            }else{
                cout<<"* ";
            }
        }cout<<endl;
    }
    */


    /*
    1
    2*3
    4*5*6
    7*8*9*10
    7*8*9*10
    4*5*6
    2*3
    1

    int n;
    cin>>n;
    int c = 1;
    for(int row = 0; row < n; row++){
        for(int col = 0; col <= row; col++){
            cout<<c;
            c++;
            if(col < row){
                cout<<"*";
            }
        }cout<<endl;
    }
    int start = c - n;
    for(int row = 0; row < n; row++){
        int k = start;
        for(int col = 0; col <= n-row-1; col++){
            cout<<k;
            k++;
            if(col < n-row-1){
                cout<<"*";
            }
        }start -= (n-row-1);
        cout<<endl;
    }
    */

    /*
    *
    * 1 *
    * 1 2 1 *
    * 1 2 3 2 1 *
    * 1 2 1 *
    * 1 *
    *
    
    int n;
    cin>>n;
    for(int row = 0; row < n; row++){
        int cond = row <= n/2 ? 2*row : 2*(n-row-1);
        for(int col = 0; col <=cond; col++){
            if(col <= cond/2){
                cout<<col+1<<" ";
            }else{
                cout<<cond-col+1<<" ";
            }
        }cout<<endl;
    }
    */






    return 0;
}