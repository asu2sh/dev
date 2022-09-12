#include <iostream>
#include <vector>

/**
 * The function takes in an array, a number k, and an index, and returns the value of the last element
 * in the array after k elements have been removed from the array, starting at the index
 * 
 * @param arr The array of people
 * @param k the step size
 * @param index the index of the person who is going to be killed
 * 
 * @return The last person standing.
 */
int josephus(std::vector<int> &arr, int k, int index){

    if(arr.size()==1)
        return arr[0];
    
    index = (index + k) % arr.size();

    arr.erase(arr.begin()+ index);

    return josephus(arr, k, index);
}

int main(){

    int n, k;
    std::cin >> n >> k;
    std::vector<int> arr(n);

    for(int i=0; i<n; ++i)
        arr[i] = i;

    int index = 0;
    k--;    
    //because counting starts from the person itself,
    //like if k = 1, then the person having sword has kill itself.

    std::cout << josephus(arr, k, index);
}

// int jos(int n, int k)
// {
// 	if(n == 1)
// 		return 0;
// 	else
// 		return (jos(n - 1, k) + k) % n;
// }