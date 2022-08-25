#include <iostream>
#include <vector>

// Auxiliary Space: O(no. of Flips)
void minmFlip(int arr[], int n){

    int same = arr[0];
    int flipCnt = 0;
    std::vector<int> idx;

    for(int i=1; i<n; ++i){

        if(same != arr[i]){
            flipCnt++;
            same = arr[i];
            idx.push_back(i);
        }
    }
    idx.push_back(n);
    
    for(int i=0; i<flipCnt; i=i+2)
        std::cout << "From " << idx[i] << " to " << idx[i+1]-1 << std::endl;
}

// Auxiliary Space: O(1)
void printGroups(int arr[], int n){

    for(int i=1; i<n; i++){

        if(arr[i] != arr[i-1]){

            if(arr[i] != arr[0])
                std::cout << "From " << i << " to ";
            else
                std::cout << i-1 << std::endl;
        }
    }

    if(arr[n-1] != arr[0])
        std::cout << n-1 << std::endl;
}

int main(){

    int n;
    std::cin >> n;
    int arr[n];

    for(int i=0; i<n; ++i)
        std::cin >> arr[i];
    
    minmFlip(arr, n);
    //printGroups(arr, n);
}