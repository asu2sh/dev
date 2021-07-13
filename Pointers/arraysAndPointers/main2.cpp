#include <iostream>

int sumOfElements(int arr[], int size){     // int* arr can be used for int arr[]

    // std::cout << "Size of arr[] = " << sizeof(arr) << "\n"
    //           << "Size of arr[0] = " << sizeof(arr[0]) << std::endl;

    int sum = 0;
    for(int i=0; i<size; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){

    int A[5] = {8, 3, 5, 1, 9};
    
    int size = sizeof(A)/sizeof(A[0]);
    int total = sumOfElements(A, size);     // A can be used for &A[0]

    std::cout << "Sum of elements = "
              << total << std::endl;

}