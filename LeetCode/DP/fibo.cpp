#include <iostream>
#include <vector>

main()
{   
    int n;
    std::cin >> n;  
    std::vector<int> arr(n);
        
        arr[0] = 0;
        arr[1] = 1;
        
        for(int i=2; i<= n; i++){
            arr[i] = arr[i-1] + arr[i-2];
        }
        std::cout <<  arr[n];
        
}
