#include <iostream>

void merge(int arr[], int l, int m, int r){

    int n1 = m-l+1;
    int n2 = r-m;
    int left[n1], right[n2];

    for(int i=0; i<n1; i++)
        left[i] = arr[l+i];
    
    for(int i=0; i<n2; i++)
        right[i] = arr[m+1+i];

    int i=0, j=0, k=l;  

    while(i<n1 && j<n2){
        if(left[i] <= right[j]){
            arr[k] = left[i];
            i++;
            k++;
        }else{
            arr[k] = right[j];
            j++;
            k++;
        }
    }

    while(i<n1){
        arr[k] = left[i];
        i++;
        k++;
    }

    while(j<n2){
        arr[k] = right[j];
        j++;
        k++;
    }
}


void mergeSort(int arr[], int l, int r){

    if(l==r)
        return;
    int m = l + (r-l)/2;
    mergeSort(arr, l, m);
    mergeSort(arr, m+1, r);
    
    merge(arr, l, m, r);
}

int main(){

    int n;
    std::cin >> n;
    int arr[n];

    for(int i=0; i<n; ++i)
        std::cin >> arr[i];
    
    int l, r;
    l = 0;
    r = n-1;

    mergeSort(arr, l, r);
    
    for(const int &x: arr)
        std::cout << x << " ";
}