#include <iostream>
#include <vector>

void twoOddOccuring(std::vector<int> arr, int n){

    int XOR = 0, res1 = 0, res2 = 0;
    
    for(int i=0; i<n; i++)  
        XOR = XOR ^ arr[i];

    int value = XOR & ~(XOR-1);     // value stands for Right Most Bit Value

    for(int i=0; i<n; i++){
        
        if((arr[i] & value) != 0)
            res1 = res1 ^ arr[i];
        else
            res2 = res2 ^ arr[i];
    }

    std::cout << res1 << "\t" << res2;
}

int main(){

    int n;
    std::cin >> n;
    std::vector<int> arr(n);

    for(int i=0; i<n; i++)
        std::cin >> arr[i];

    twoOddOccuring(arr, n);
}