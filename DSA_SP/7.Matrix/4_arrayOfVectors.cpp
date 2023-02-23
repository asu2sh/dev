#include <iostream>
#include <vector>

int main(){
    
    int m=3, n=2;
    std::vector<int> arr[m];

    for(int i=0; i<m; ++i)
        for(int j=0; j<n; ++j)
        {
            arr[i].push_back(i+j);
            std::cout << arr[i][j] << " ";
        }
}

// Advantages: Dynamic Sized Rows & Easy to pass to fn
// Disadvantages: not cache friendly
