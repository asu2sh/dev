#include <iostream>
#include <vector>

void insertElement(std::vector<int> &arr, int temp){

    if(arr.size()==0 || arr[arr.size()-1] <= temp){
        arr.push_back(temp);
        return;
    }

    int val = arr[arr.size()-1];
    arr.pop_back();

    insertElement(arr, temp);
    arr.push_back(val);
    return;
}

void sortArray(std::vector<int> &arr){

    if(arr.size()==1)
        return;

    int temp = arr[arr.size()-1];
    arr.pop_back();

    sortArray(arr);
    insertElement(arr, temp);
}

int main(){
    int n;
    std::cin >> n;
    std::vector<int> arr(n);

    for(int i=0; i<n; i++)
        std::cin >> arr[i];
    
    sortArray(arr);

    for(int i=0; i<n; i++)
        std::cout << arr[i];
}