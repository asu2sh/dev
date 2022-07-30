#include <iostream>
#include <vector>

int oneOddOccuring(std::vector<int> arr, int n){

    int res = 0;                //! because x ^ 0 = x
    for(int i=0; i<n; i++){
        res = res ^ arr[i];     //! since x ^ x = 0, we will cancel all even occurings
    }
    return res;
}

int main(){

    int n;
    std::cin >> n;
    std::vector<int> arr(n);

    for(int i=0; i<n; i++)
        std::cin >> arr[i];
    
    std::cout << "\t" << oneOddOccuring(arr, n);
}

    //* Naive Approach:
    // int res = 0;
    // int count = 0;

    // for(int i=0; i<n; i++){
    //     res = arr[i];
    //     for(int j=i; j<n; j++){
    //         if(res == arr[j])
    //             count++;
    //     }
    //     if(count%2!=0)  
    //         break;
    //     count = 0;
    // }
    // return res;