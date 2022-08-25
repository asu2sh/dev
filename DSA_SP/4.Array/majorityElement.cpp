// Moore's Voting Algorithm

#include <iostream>

void majorityElement(int arr[], int n){

    int res = 0;
    int cnt = 1;

    for(int i=1; i<n; ++i){

        if(arr[res] == arr[i])
            cnt++;
        else
            cnt--;
        
        if(cnt == 0){
            res = i;
            cnt = 1;
        }
    }

    for(int i=0; i<n; ++i){

        if(arr[res] == arr[i])
            cnt++;
    }

    if(cnt > n/2)
        std::cout << res;
    else
        std::cout << "-1";

}

int main(){

    int n;
    std::cin >> n;
    int arr[n];

    for(int i=0; i<n; ++i)
        std::cin >> arr[i];
    
    majorityElement(arr, n);
}