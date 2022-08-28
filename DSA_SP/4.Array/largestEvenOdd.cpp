#include <iostream>

void sub(int arr[], int n){

    int cnt = 1;
    int maxCnt = 1;

    for(int i=0; i<n-1; i++){

        if( (arr[i]%2==0 && arr[i+1]%2!=0) || (arr[i]%2!=0 && arr[i+1]%2==0) )
            cnt++;
        else
            cnt = 1;

        maxCnt = std::max(maxCnt, cnt);
    }
    std::cout << maxCnt;
}

int main(){

    int n;
    std::cin >> n;
    int arr[n];

    for(int i=0; i<n; i++)
        std::cin >> arr[i];
    
    sub(arr, n);
}