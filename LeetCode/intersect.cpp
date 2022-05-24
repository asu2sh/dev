#include<iostream>
#include<vector>
#include<algorithm>

int main(){
        
        std::vector<int> nums1 = {4,9,5};
        std::vector<int> nums2 = {9,4,9,8,4};
        std::vector<int> res;
        
        for(int i=0; i<nums1.size(); i++){
            for(int j=0; j<nums2.size(); j++){
                if(nums1[i]==nums2[j]){
                    res.push_back(nums1[i]);
                    break;
                }
            }
        }

        // res.erase(std::unique(res.begin(), res.end()), res.end());
        //! to remove unique elements in a vector

        for(int x: res)
            std::cout << x << " ";
}