#include<iostream>
using namespace std;

void print(int **ptr, int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    /*
    // 1. allocate int
    // using new keyword
    int *intPtr = new int(5); 
    // using  malloc -> it returns the address in the void pointer as we've to tell the no. of byte we want to allocate in a heap
    int * mptr = (int*) malloc(4);
    *mptr = 5;
    cout << *intPtr << " " << *mptr << endl;
    delete intPtr;
    free(mptr);

    // 2. 1D array allocation
    // using new keyword -> it will return the address of the first index of the array
    int *arrnew = new int[5];
    // using  malloc 
    int *arrmalloc = (int*) malloc(5*sizeof(int));
    for(int i = 0; i < 5; i++) {
        int d;
        cin >> d;
        arrnew[i] = arrmalloc[i] = d;
    }
    for(int i = 0; i < 5; i++) {
        cout << arrnew[i] << " " << arrmalloc[i] << endl;
    }
    delete[] arrnew;
    free(arrmalloc);
    */
    // 3. 2D array Allocation
    // using new keyword
    int rows = 5, cols = 5;
    int **ptr2d = new int *[rows];   // create row pointer

    for(int i = 0; i < rows; i++) {
        ptr2d[i] = new int[cols];
    }
    // using malloc method
    int **ptr2dmalloc = (int**) malloc(sizeof(int*) * rows);
    for(int i = 0; i < rows; i++) {
        ptr2dmalloc[i] = (int *) malloc(sizeof(int) * cols);
    }

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            ptr2d[i][j] = 7;
            ptr2dmalloc[i][j] = 8;
        }
    }

    print(ptr2d, rows, cols);
    print(ptr2dmalloc, rows, cols);

    for(int i = 0; i < rows; i++) {
        delete[] ptr2d[i];
    }
    delete[] ptr2d;

    for(int i = 0; i < rows; i++) {
        free(ptr2dmalloc[i]);
    }
    free(ptr2dmalloc);

    return 0;
}
