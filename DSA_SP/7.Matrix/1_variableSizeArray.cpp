#include <iostream>

int main(){
    int m=3, n=2;
    int arr[m][n];

    for(int i=0; i<m; ++i)
        for(int j=0; j<n; ++j)
            arr[i][j] = i+j;
    
    for(int i=0; i<m; ++i)
        for(int j=0; j<n; ++j)
            std::cout << arr[i][j] << " ";

    return 0;
}

// In C++:
// Elements are stored in row major order.
// Internal Curly Braces are optional.
// Only the first dimension can be omitted when we initialize.