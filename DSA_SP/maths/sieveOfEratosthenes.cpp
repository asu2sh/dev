#include <iostream>
#include <vector>

void sieve(int n){

    if(n<2) std::cout << "NA" << std::endl;
    
    std::vector<bool> arr(n+1, true);

    for(int i=2; i<=n; i++){
        if(arr[i]){
            std::cout << i << " ";
            for(int j=2; i*j<=n; j++)
                arr[i*j] = false;
        }
    }
}

int main(){

    int n;
    std::cin >> n;
    sieve(n);
}



//? Naive Approach: O(n*sqrt(n))
// bool isPrime(int x){

//     if(x==1)    return false;
//     if(x%2==0 || x%3==0)    return false;
//     for(int i=5; i*i<=x; i++){
//         if(x%i==0)
//             return false;
//     }
//     return true;
// }

// void printPrime(int n){

//     for(int i=2; i<=n; i++)
//         if(isPrime(i))
//             std::cout << i << std::endl;
// }

// int main(){

//     int n;
//     std::cin >> n;
//     printPrime(n);
// }