#include <iostream>

void maxCon(int arr[], int n){

    int cnt = 0;
    int maxCnt = 0;

    for(int i=0; i<n; i++){

        if(arr[i])
            cnt++;
        
        if(!arr[i])
            cnt = 0;
        
        maxCnt = std::max(cnt, maxCnt);
    }
    std::cout << maxCnt;
}

int main(){

    int n;
    std::cin >> n;
    int arr[n];

    for(int i=0; i<n; ++i)
        std::cin >> arr[i];
    
    maxCon(arr, n);
}