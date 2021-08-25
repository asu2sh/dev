#include <iostream>
#include <vector>

void sieve(int n){

    std::vector<bool> isPrime(n+1, true);

    for(int i=2; i<=n; i++){
        if(isPrime[i])
        {
            std::cout << i << " ";

            for(int j = i*i; j<=n; j = j+i)
                isPrime[j] = false;
        }
    }
}
//* time complexity: O(log log n)

int main(){

    int num;
    std::cin >> num;
    sieve(num);

    return 0;
}