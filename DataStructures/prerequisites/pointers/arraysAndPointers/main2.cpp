#include <iostream>

int sumOfElements(int arr[], int size){

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
    int total = sumOfElements(A, size);

    std::cout << "Sum of elements = "
              << total << std::endl;

}