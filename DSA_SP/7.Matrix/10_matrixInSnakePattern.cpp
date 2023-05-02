#include <iostream>
#include <vector>

void printSnake(std::vector<std::vector<int>> &arr){

    for(int i=0; i<arr.size(); ++i){
        if(i%2==0){
            for(int j=0; j<arr[0].size(); j++)
                std::cout << arr[i][j] << " ";
        }
        else{
            for(int j=arr[0].size()-1; j>=0; --j)
                std::cout << arr[i][j] << " ";
        }
    }
}

int main(){
    int m=4, n=4;
    std::vector<std::vector<int>> arr;
    int x=1;

    for(int i=0; i<m; ++i){
        std::vector<int> v;
        for(int j=0; j<n; ++j){
            v.push_back(x);
            x++;
        }
        arr.push_back(v);
    }
    printSnake(arr);
}