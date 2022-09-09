#include <iostream>

int hoare(int arr[], int l, int h){

    int pivot = arr[l];

    int i = l-1, j = h+1;

    while(true){

        do{
            i++;
        }while(arr[i] < pivot);

        do{
            j--;
        }while(arr[j] > pivot);

        if(i >= j)
            return j;

        std::swap(arr[i], arr[j]);
    }
}

void qSort(int arr[], int l, int h){

    if(l < h){

        int p = hoare(arr, l, h);

        qSort(arr, l, p);
        qSort(arr, p+1, h);
    }
}

int main(){

    int n;
    std::cin >> n;
    int arr[n];

    for(int i=0; i<n; i++)
        std::cin >> arr[i];

    qSort(arr, 0, n-1);

    for(int i=0; i<n; ++i)
        std::cout << arr[i] << " ";
}