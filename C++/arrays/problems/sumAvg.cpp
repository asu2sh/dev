//Display Sum and Average of Array Elements Using for Loop

#include <iostream>

int main(){

    std::cout << "Enter the no. of elements : " << std::endl;
    int n;
    std::cin >> n;

    int arr[n];

    for(int i=0; i<n; i++){
        std::cin >> arr[i];
    }

    int count = 0, sum = 0;

    std::cout << "The elements in the array are : ";
    for(const int &j : arr){
        std::cout << j << " ";
        sum += j;
        count ++;
    }
    int avg = sum / count;

    std::cout << " The no. of elements in the array : " << count << '\n'
              << " The sum of elements in the array : " << sum << '\n'
              << " Average : " << avg << std::endl;

}
