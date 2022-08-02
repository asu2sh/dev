#include <iostream>
#include <vector>



int main(){

    int n;
    std::cin >> n;
    std::vector<int> arr(n);

    for(int i=0; i<n; i++)
        std::cin >> arr[i];
    
    std::cout << maxANDvalue(arr, n);
}





// int maxANDvalue(std::vector<int> arr, int n){

//     int max = 0;
//     int temp = 0;

//     for(int i=0; i<n-1; i++){
//         for(int j=i+1; j<n; j++){

//             temp = arr[i] & arr[j];
//             if(max<temp){
//                 max = temp;
//             }
//         }
//     }
//     return max;
// }