#include <iostream>
#include <vector>

// int subsetSum(std::vector<int> arr, int n, int sum){

//     if(n==0)
//         return (sum == 0) ? 1 : 0;
    
//     return subsetSum(arr, n-1, sum) + subsetSum(arr, n-1, sum-arr[n-1]);
// }

int subsetSum(std::vector<int> arr, int targetSum, int sum, int& count){

    if(arr.size()==0){
        if(sum==targetSum)
            count++;
        return 0;
    }

    int sum1 = sum;
    int sum2 = sum + arr[0];

    arr.erase(arr.begin()+ 0);

    subsetSum(arr, targetSum, sum1, count);
    subsetSum(arr, targetSum, sum2, count);
    return count;
}

int main(){

    int n;
    std::cin >> n;
    std::vector<int> arr(n);

    for(int i=0; i<n; ++i)
        std::cin >> arr[i];

    int targetSum;
    std::cin >> targetSum;

    int sum = 0;
    int count = 0;
    std::cout << subsetSum(arr, targetSum, sum, count);
}