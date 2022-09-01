//* Maximum Repeating Element
// Array size, n >= 2
// Only One element repeats(any no. of times)
// All the elements from 0 to max(arr) are present
// therefore 0 <= max(arr) <= n-2

#include <iostream>
#include <algorithm>

//? Cycle Approach
int repeatingElement(int arr[], int n){

    int slow = arr[0]+1, fast = arr[0]+1;

    do{
        slow = arr[slow]+1;
        fast = arr[arr[fast]+1]+1;

    }while(slow != fast);

    slow = arr[0]+1;

    while(slow != fast){

        slow = arr[slow]+1;
        fast = arr[fast]+1;
    }

    return slow-1;
}
// If input doesn't contain 1 <= max(arr) <= n-1, then we will get rid of all the 1s
// to get rid of unnecessary self loops,
// we add 1 in the algo & later remove it from the result
// for e.g. 0, 2, 1, 3, 2 & 1, 0, 2, 2


//* Efficient: O(n) | O(n)
// int repeatingElement(int arr[], int n){

//     int visited[n] = {false};

//     for(int i=0; i<n; ++i){

//         if(visited[arr[i]])
//             return arr[i];
        
//         visited[arr[i]] = true;
//     }
//     return -1;
// }


//* Naive: O(nlogn) | O(1)
// int repeatingElement(int arr[], int n){

//     std::sort(arr, arr+n);

//     for(int i=0; i<n; ++i){
//         if(arr[i] != i)
//             return arr[i];
//     }
//     return -1;
// }

int main(){

    int n;
    std::cin >> n;
    int arr[n];

    for(int i=0; i<n; i++)
        std::cin >> arr[i];

    std::cout << repeatingElement(arr, n);
}