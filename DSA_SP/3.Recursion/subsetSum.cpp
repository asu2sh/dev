#include <iostream>
#include <vector>

// int subsetSum(std::vector<int> arr, int n, int sum){

//     if(n==0)
//         return (sum == 0) ? 1 : 0;
    
//     return subsetSum(arr, n-1, sum) + subsetSum(arr, n-1, sum-arr[n-1]);
// }

/**
 * It takes an array of integers, a target sum, a sum, and a count. It returns the number of subsets of
 * the array that sum to the target sum
 * 
 * @param arr the array of integers
 * @param targetSum the sum of the subset we're looking for
 * @param sum the sum of the current subset
 * @param count the number of subsets that add up to the target sum
 * 
 * @return The number of subsets that add up to the target sum.
 */
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