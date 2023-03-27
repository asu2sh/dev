#include <iostream>

const int R = 3;
const int C = 2;

void printfunc(int arr[R][C]){
    for (int i = 0; i < R; i++){
        for (int j = 0; j < C; j++){
            std::cout << arr[i][j] << " ";
        } 
    }
}

int main(){

    int arr[R][C] = {1, 2, 3, 4, 5, 6};
    printfunc(arr);
}

// not a general purpose fn