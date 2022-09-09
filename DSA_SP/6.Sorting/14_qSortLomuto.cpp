#include <iostream>

int lomuto(int arr[], int l, int h){

    int pivot = arr[h];

    int idx = l - 1;

    for(int i=l; i<=h; ++i){

        if(arr[i] < pivot){
            idx++;
            std::swap(arr[i], arr[idx]);
        }
    }

    std::swap(arr[idx+1], arr[h]);

    return (idx+1);
}

void qSort(int arr[], int l, int h){

    if(l < h){

        int p = lomuto(arr, l, h);

        qSort(arr, l, p-1);
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