#include <iostream>
#include <vector>

int main(){
    
    int m=3, n=2;
    std::vector<std::vector<int>> arr;

    for (int i = 0; i < m; i++)
    {
        std::vector<int> v;
        for (int  j = 0; j < n; j++)
        {
            v.push_back(i+j);
        }
        arr.push_back(v);
    }

    for(int i=0; i<m; ++i)
        for(int j=0; j<n; ++j)
            std::cout << arr[i][j] << " ";
    
}