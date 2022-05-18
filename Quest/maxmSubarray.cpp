// Dynamic Programming Approach

#include <iostream>
#include <vector>

int main(){

    std::vector<int> arr = {-2, -3, -4, -1, -2, -5, -1};

    int maxSum = arr[0];
    int res = arr[0];

    int start=0, end=0, s=0;

    for(int i=0; i<arr.size(); i++){
        
        // maxSum = std::max(maxSum + arr[i], arr[i]);
        if((maxSum+arr[i])<arr[i]){
            maxSum = arr[i];
            s = i;    
        }
        else
            maxSum = maxSum + arr[i];

        // res = std::max(res, maxSum);
        if(res < maxSum){
            res = maxSum;
    
            start = s;
            end = i;   
        }
    }
    std::cout << res << start << end << std::endl;

}