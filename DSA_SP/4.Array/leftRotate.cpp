#include <iostream>

void leftRotate(int arr[], int n, int k){

    

}

int main(){

    int n, k;
    std::cin >> n >> k;

    int arr[n];
    for(int i=0; i<n; ++i)
        std::cin >> arr[i];
    
    leftRotate(arr, n, k);
}

//! For left rotating array by 1
// void leftRotate(int arr[], int n, int k=1){

//     int temp = arr[0];

//     for(int i=1; i<n; ++i){
//         arr[i-1] = arr[i];
//     }
//     arr[n-1] = temp;

//     for(int i=0; i<n; ++i)
//         std::cout << arr[i] << " ";
// }