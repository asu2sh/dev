#include <iostream>

int main(){

    int m=3, n=2;
    int **arr;
    arr = new int *[m];

    for(int i=0; i<m; ++i)
        arr[i] = new int[n];
        // Advantage: we can create Jagged Arrays using double pointer method
        // Disadvantage: it's not cache friendly

    for(int i=0; i<m; ++i)
        for(int j=0; j<n; ++j)
        {
            arr[i][j] = i+j;
            std::cout << arr[i][j] << " ";
        }
}


// int *a = new int[n];
// allocates an array of int's with size n
// In general, T *a = new T[n];
// allocates an array of T's with size n
// If we substitute T = int *,
// you'll get int **a = new int *[n];
// which allocates an array of int *'s i.e. of pointers to int