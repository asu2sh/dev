#include <iostream>

void printfunc(int *arr[], int m, int n){

    for(int i=0; i<m; ++i){
        for(int j=0; j<n; ++j){
            std::cout << arr[i][j] << " ";
        }
    }
}
// for the double ptr approach pass **arr to the fn

int main(){
    
    // int **arr;
    int m=3, n=2;
    int *arr[m];
    // arr = new int*[m];

    for(int i=0; i<m; ++i){
        arr[i] = new int[n];
        for(int j=0; j<n; ++j){
            arr[i][j] = i+j;
            std::cout << arr[i][j] << " ";
        }
    }
    std::cout << "\n";
    printfunc(arr, m, n);
}
