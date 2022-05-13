#include <iostream>

void mergedArray(int L[], int R[], int n, int m){
    
    int arr[n+m];

    int i, j, k;
    i = 0;
    j = 0;
    k = 0;

    while(i<n && j<m){
        if(L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        } else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while(i<n){
        arr[k] = L[i];
        i++;
        k++;
    }

    while(j<m){
        arr[k] = R[j];
        j++;
        k++;
    }

    for(const int &l : arr)
        std::cout << l << " ";

}

int main(){
    int n, m;

    std::cin >> n;
    int arr1[n];

    for(int i=0; i<n; i++)
        std::cin >> arr1[i];
    
    std::cout << "*";
    std::cin >> m;
    int arr2[m];

    for(int j=0; j<m; j++)
        std::cin >> arr2[j];

    mergedArray(arr1, arr2, n, m);

}