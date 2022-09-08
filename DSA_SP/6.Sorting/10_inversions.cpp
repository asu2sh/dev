#include <iostream>

int cntAndMerge(int arr[], int low, int mid, int high){

    int n1 = mid-low+1, n2 = high-mid;

    int left[n1], right[n2];

    for(int i=0; i<n1; ++i)
        left[i] = arr[i+low];
    
    for(int i=0; i<n2; ++i)
        right[i] = arr[i+mid+1];

    int i = 0, j = 0, k = low;
    int res = 0;

    while(i < n1 && j < n2){

        if(left[i] <= right[j]){
            arr[k] = left[i];
            i++;
        }
        else{
            arr[k] = right[j];
            j++;
            res = res + (n1 - i);
        }
        k++;
    }

    while(i < n1)
        arr[k++] = left[i++];
    
    while(j < n2)
        arr[k++] = right[j++];
    
    return res;
}

int cntInversion(int arr[], int low, int high){

    int res = 0;

    if(low < high){

        int mid = low + (high-low)/2;

        res += cntInversion(arr, low, mid);
        res += cntInversion(arr, mid+1, high);

        res += cntAndMerge(arr, low, mid, high);
    }
    return res;
}

int main(){

    int n;
    std::cin >> n;
    int arr[n];

    for(int i=0; i<n; i++)
        std::cin >> arr[i];

    std::cout << cntInversion(arr, 0, n-1);
}