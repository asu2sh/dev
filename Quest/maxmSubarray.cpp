#include <iostream>
#include <vector>

int main(){


    std::vector<int> arr = {-2, -3, 4, -1, -2, 1, 5, -3};

    int maxSum = arr[0];
    int res = arr[0];

    for(int i=0; i<arr.size(); i++){
        
        maxSum = std::max(maxSum + arr[i], arr[i]);
        res = std::max(res, maxSum);
    }

    std::cout << res << std::endl;

}