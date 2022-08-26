// Find Equilibrium point in an array if it has any
#include <iostream>

// Time Complexity: O(n)    Auxiliary Space: O(1)
bool checkEq(int arr[], int n)
{
	int sum = 0;
	for(int i = 0; i < n; i++)
		sum += arr[i];

	int lsum = 0;
	for(int i = 0; i < n; i++){

		if(lsum == sum - arr[i])
			return true;

		lsum += arr[i];
		sum -= arr[i];
	}
	return false;
}

// Time Complexity: O(n)    Auxiliary Space: O(c)
int pSum[1000];

void prefixSum(int arr[], int n){

    pSum[0] = arr[0];
    for(int i=1; i<n; ++i)
        pSum[i] = pSum[i-1] + arr[i];
}

void hasEP(int pSum[], int n){

    if( (pSum[n-1] - pSum[0]) == 0){
        std::cout << "YES " << "0";
        return;
    }

    if( (pSum[n-1] - pSum[n-2]) == 0){
        std::cout << "YES " << n-1;
        return;
    }
    
    for(int i=1; i<n; ++i){
        if(pSum[i-1] == (pSum[n-1] - pSum[i])){
            std::cout << "YES " << i ;
            return;
        }
    }
    std::cout << "NO";
}

int main(){

    int n;
    std::cin >> n;
    int arr[n];

    for(int i=0; i<n; ++i)
        std::cin >> arr[i];
    
    prefixSum(arr, n);
    hasEP(pSum, n);

    // std::cout << checkEq(arr, n);
}