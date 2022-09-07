#include <iostream>

void mergeFn(int arr1[], int arr2[], int n1, int n2){

    int res[n1+n2];
    int i = 0, i1 = 0, i2 = 0;

    while(i1 < n1 && i2 < n2){
        if(arr1[i1] <= arr2[i2]){
            res[i] = arr1[i1];
            i1++;
            i++;
        }
        else{
            res[i] = arr2[i2];
            i2++;
            i++;
        }
    }

    while(i1 < n1){
        res[i] = arr1[i1];
        i++;
        i1++;
    }
    
    while(i2 < n2){
        res[i] = arr2[i2];
        i++;
        i2++;
    }

    for(int &x: res)
        std::cout << x << " ";
}

int main(){

    int n1;
    std::cin >> n1;
    int arr1[n1];

    for(int i=0; i<n1; i++)
        std::cin >> arr1[i];
    
    int n2;
    std::cin >> n2;
    int arr2[n2];
    
    for(int i=0; i<n2; i++)
        std::cin >> arr2[i];

    mergeFn(arr1, arr2, n1, n2);
}