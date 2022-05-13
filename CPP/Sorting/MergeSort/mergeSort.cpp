#include <iostream>

void mergeIt(int arr[], int l, int m, int r){
    int i, j, k;
    int leftArraySize = m-l+1;
    int rightArraySize = r-m;
    int leftArray[leftArraySize];
    int rightArray[rightArraySize];

    for(i=0; i<leftArraySize; i++)
        leftArray[i] = arr[l+i];
    
    for(j=0; j<rightArraySize; j++)
        rightArray[j] = arr[m+1+j];

    
}

void breakIt(int arr[], int l, int r){
    if(l == r)
        return;
    int m = l+(r-1)/2;
    breakIt(arr, l, m);
    breakIt(arr, m+1, r);
    mergeIt(arr, l, m, r);
}