#include <iostream>

void unionOf(int arr1[], int arr2[], int n1, int n2){

    int i = 0, j = 0;

    while(i < n1 && j < n2){

        if(i > 0 && arr1[i] == arr1[i-1]){
            i++;
            continue;
        }
        if(j > 0 && arr2[j] == arr2[j-1]){
            j++;
            continue;
        }

        if(arr1[i] < arr2[j]){
            std::cout << arr1[i] << " ";
            i++;
        }
        else if(arr1[i] > arr2[j]){
            std::cout << arr2[j] << " ";
            j++;
        }

        else{
            std::cout << arr1[i] << " ";
            i++;
            j++;
        }
    }

    while(i < n1){
        if(i > 0 && arr1[i] != arr1[i-1])
            std::cout << arr1[i] << " ";
        i++;
    }
    
    while(j < n2){
        if(j > 0 && arr2[j] != arr2[j-1])
            std::cout << arr2[j] << " ";
        j++;
    }
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

    for(int i=0; i<n2; ++i)
        std::cin >> arr2[i];

    unionOf(arr1, arr2, n1, n2);
    
}