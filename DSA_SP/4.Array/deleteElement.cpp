#include <iostream>

void deleteElement(int arr[], int n, int k)
{
    for(int i=k-1; i<n; i++)
    {
        arr[i] = arr[i+1];
    }

    for(int i=0; i<n; i++)
        std::cout << arr[i];
}

int main()
{
    int k;
    int n;
    std::cin >> k >> n;

    int arr[n];

    for(int i=0; i<n; i++)
        std::cin >> arr[i];
 
    deleteElement(arr, n, k);
}