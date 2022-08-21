#include <iostream>

void insertElement(int arr[], int n, int capacity, int k, int num)
{
    if(n==capacity)
    {
        std::cout << "INSERTION FAILED: array is full";
        return;
    }

    for(int i=n-1; i>=k-1; i--)
    {
        arr[i+1] = arr[i];
    }

    arr[k-1] = num;

    for(int i=0; i<n; i++) 
        std::cout << arr[i] << " ";
}

int main()
{
    int k;
    int num;
    int n;
    int capacity;
    std::cin >> k >> num >> n >> capacity;

    int arr[n];
    for(int i=0; i<capacity; i++)
        std::cin >> arr[i];
    
    insertElement(arr, n, capacity, k, num);
}