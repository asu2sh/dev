#include <iostream>

void maxAppearing(int l[], int r[], int n){

    int arr[1000] = {0};
    // std::vector <int> arr[1000]; default values are 0 in vectors

    for(int i=0; i<n; ++i){
        arr[l[i]]++;
        arr[r[i] + 1]--;
    }

    int maxm = arr[0], res = 0;

    for(int i=1; i<1000; ++i){
        arr[i] += arr[i-1];
        if(maxm < arr[i]){
            maxm = arr[i];
            res = i;
        }
    }
    std::cout << res;
}

int main(){

    int n;
    std::cin >> n;

    int l[n];
    int r[n];

    for(int i=0; i<n; ++i)
        std::cin >> l[i];

    for(int i=0; i<n; ++i)
        std::cin >> r[i];

    maxAppearing(l, r, n);
}