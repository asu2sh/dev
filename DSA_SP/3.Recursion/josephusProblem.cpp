#include <iostream>
#include <vector>

int josephus(std::vector<int> arr, int k, int index){

    if(arr.size()==1)
        return arr[0];
    
    index = (index + k) % arr.size();

    arr.erase(arr.begin()+ index);

    return josephus(arr, k, index);
}

int main(){

    int n, k;
    std::cin >> n >> k;
    std::vector<int> arr(n);

    for(int i=0; i<n; ++i)
        arr[i] = i;

    int index = 0;
    int res = 0;
    k--;

    std::cout << josephus(arr, k, index);
}