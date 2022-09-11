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

// Time Complexity: O(n)    Auxiliary Space: O(1)
int equilibriumPoint(int a[], int n) {
    
    if(n == 1)
        return 1;
        
    int l = 0;
    int r = n-1;
            
    int lsum = 0, rsum = 0;
            
    while(l < r){
        
        if(lsum + a[l] > rsum + a[r]){
            rsum += a[r];
            r--;
        }
            
        else{
            lsum += a[l];
            l++;
        }
    }
            
    if(lsum == rsum)
        return l;
        
    return -1;
}

int main(){

    int n;
    std::cin >> n;
    int arr[n];

    for(int i=0; i<n; ++i)
        std::cin >> arr[i];

    std::cout << checkEq(arr, n) << " " << equilibriumPoint(arr, n);
}