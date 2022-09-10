#include <iostream>
#include <algorithm>

int maxmGuests(int arr[], int dep[], int n, int m){

    std::sort(arr, arr + n);
    std::sort(dep, dep + m);

    int i = 0, j = 0, curr = 0, res = 0;

    while(i < n && j < m){

        if(arr[i] <= dep[j]){
            curr++;
            i++;
        }
        else{
            curr--;
            j++;
        }

        res = std::max(res, curr);
    }
    return res;
}

int main(){

    int n;
    std::cin >> n;
    int arr[n];

    for(int i=0; i<n; i++)
        std::cin >> arr[i];

    int m;
    std::cin >> m;
    int dep[m];

    for(int i=0; i<m; ++i)
        std::cin >> dep[i];
    
    std::cout << maxmGuests(arr, dep, n, m);
}