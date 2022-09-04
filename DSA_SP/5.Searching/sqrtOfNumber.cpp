#include <iostream>

int sqrtof(int n){

    int low = 1, high = n;
    int ans = 0;

    while(low <= high){

        int mid = (low+high)/2;

        if(mid*mid == n)
            return mid;
        
        else if(mid*mid > n)
            high = mid - 1;
        
        else{
            low = mid + 1;
            ans = mid;
        }
    }
    return ans;
}

int main(){

    int n;
    std::cin >> n;
    
    std::cout << sqrtof(n);
}