#include <iostream>
#include <vector>

void printfunc(std::vector<int>arr[], int m){

    for(int i=0; i<m; ++i){
        for(int j=0; j<arr[i].size(); ++j){
            std::cout << arr[i][j] << " ";
        }
    }
}

int main(){
    
    int m=3, n=2;
    std::vector<int> arr[m];

    for(int i=0; i<m; ++i){
        for(int j=0; j<n; ++j){
            arr[i].push_back(i+j);
        }
    }
    printfunc(arr, m);
}