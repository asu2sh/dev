#include <iostream>

void cycle(int arr[], int n){

    if(arr[0] == arr[1])
        std::swap(arr[0], arr[n-1]);

    int cnt = 0;

    for(int idx=0; idx<n; ++idx){

        int item = arr[idx];
        int pos = idx;

        for(int i=idx+1; i<n; ++i){
            if(arr[i] < item)
                pos++;
        }
        std::swap(arr[pos], item);

        while(pos != idx){

            pos = idx;

            for(int i=idx+1; i<n; ++i){  
                if(arr[i] < item)
                    pos++;
            }
            std::swap(arr[pos], item);
            cnt++;
        }
    }

    for(int i=0; i<n; ++i)
        std::cout << arr[i] << " ";

    std::cout << "\nMinimum Swap: " << cnt;
}

int main(){

    int n;
    std::cin >> n;
    int arr[n];

    for(int i=0; i<n; i++)
        std::cin >> arr[i];

    cycle(arr, n);
}