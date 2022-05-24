// Lalchi Algorithm = bharsoe ke layak ni h

#include <iostream>
#include <vector>

int main(){


    std::vector<int> arr = {-2, -3, -4, -1, -2, -1, -5, -3};

    int sum = 0;
    int maxSum = arr[0];

    int start = 0, end = 0, s = 0;

    for(int i=0; i<arr.size(); i++){

        sum += arr[i];
        // maxSum = std::max(sum, maxSum);

        if(maxSum < sum){
            maxSum = sum;
            start = s;
            end = i;
        }

        if(sum < 0){
            sum = 0;
            s = i+1;
        }
    }

    std::cout << maxSum <<" "<< start <<" "<< end <<std::endl;
    

}