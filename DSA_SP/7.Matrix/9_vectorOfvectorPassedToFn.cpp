#include <iostream>
#include <vector>

void printfunc(std::vector<std::vector<int>> &arr){
    
    for(int i=0; i<arr.size(); ++i)
        for(int j=0; j<arr[i].size(); ++j)
            std::cout << arr[i][j] << " ";
}

int main(){
    
    int m=3, n=2;
    std::vector<std::vector<int>> arr;

    for(int i=0; i<m; ++i){
        std::vector<int> v;
        for(int j=0; j<n; ++j){
            v.push_back(i+j);
        }
        arr.push_back(v);
    }
    printfunc(arr);
}