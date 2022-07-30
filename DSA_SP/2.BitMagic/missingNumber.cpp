#include <iostream>
#include <vector>

int missingNumber(std::vector<int> arr, int n){

    int res = 0;
    for(int i=0; i<=n; i++){
        res = res ^ (i ^ arr[i]);   // as only the missing no. will not be repeated
    }                               // and since x ^ x = 0 and x ^ 0 = x, only missing number will be left
    return res;

}

int main(){

    int n;
    std::cin >> n;
    std::vector<int> arr(n+1);

    for(int i=0; i<n-1; i++){
        std::cin >> arr[i];
    }

    std::cout << missingNumber(arr, n);
}