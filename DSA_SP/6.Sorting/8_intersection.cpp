#include <iostream>

void intersection(int arr1[], int arr2[], int n, int m){

    int i = 0, j = 0;
    while(i < n && j < m){

        if(i > 0 && arr1[i] == arr1[i-1]){
            i++;
            continue;
        }

        if(arr1[i] < arr2[j])
            i++;
    
        else if(arr1[i] > arr2[j])
            j++;

        else{
            std::cout << arr1[i] << " ";
            i++;
            j++;
        }
    }
}

int main(){

    int n;
    std::cin >> n;
    int arr1[n];

    for(int i=0; i<n; i++)
        std::cin >> arr1[i];

    int m;
    std::cin >> m;
    int arr2[m];

    for(int i=0; i<m; ++i)
        std::cin >> arr2[i];

    intersection(arr1, arr2, n, m);
}