#include <iostream>

int main(){
    
    int m=3, n=2;
    int *arr[m];

    for (int i = 0; i < m; i++)
        arr[i] = new int[n];
    
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = i+j;
            std::cout << arr[i][j] << " ";
        }
}