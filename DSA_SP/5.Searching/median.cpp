//! Median Of Two Sorted Arrays
/*
    Given 2 sorted arrays of size m & n, return the median of these arrays
    Ex. nums1 = [1,3] nums2 = [2] -> 2, nums1 = [1,2] nums2 = [3,4] -> 2.5

    Binary search, partition each array until partitions are correct, get median
    [1,2,3,4,5]
    |  a|b    |
    [1,2,3,4,5,6,7,8]    -->    a <= d ? yes, c <= b ? no, so need to fix
    |      c|d      |

    Time: O(log min(m, n))
    Space: O(1)
*/

#include <iostream>
#include <vector>

double medianOf(std::vector<int>& A, std::vector<int>& B){
    
    if(A.size() > B.size())
        return medianOf(B, A);

    int x = A.size();
    int y = B.size();

    int low = 0, high = x;

    while(low <= high){

        int cutX = (low + high)/2;  // (low + high) >> 2; to avoid overflows
        int cutY = (x + y + 1)/2 - cutX;

        int maxLeftX = (cutX == 0) ? INT_MIN : A[cutX - 1];
        int maxLeftY = (cutY == 0) ? INT_MIN : B[cutY - 1];

        int minRightX = (cutX == x) ? INT_MAX : A[cutX];
        int minRightY = (cutY == y) ? INT_MAX : B[cutY];

        if(maxLeftX <= minRightY && maxLeftY <= minRightX){
            if((x+y)%2==0)
                return (std::max(maxLeftX, maxLeftY) + std::min(minRightX, minRightY))/2.0;
            
            else
                return std::max(maxLeftX, maxLeftY);
        }
        else if(maxLeftX > minRightY)
            high = cutX - 1;
        
        else
            low = cutX + 1;
    }
    return 0.0;
}

int main(){

    int n1, n2;

    std::cin >> n1;
    std::vector<int> A(n1);

    std::cin >> n2;
    std::vector<int> B(n2);

    for(int i=0; i<n1; i++)
        std::cin >> A[i];
    
    for(int i=0; i<n2; i++)
        std::cin >> B[i];
    
    std::cout << medianOf(A, B);
}
