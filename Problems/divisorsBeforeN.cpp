// Q. Find count of numbers before N with exactly X divisors

#include <iostream>

int exactlyXDivisors(int N, int x)
{
    int count=2;
    int res=0;
        
    if(N<4) return res;
        
    for(int i=4; i<=N; i++){
        for(int j=2; j<=i/2; j++){
            if(i%j==0)
                count++;
            if(count>x)
                break;
        }
        if(count==x)
            res++;
    count = 2;
    }
    return res;
}

int main()
{
    int N, x;
    std::cin >> N >> x;
    std::cout << exactlyXDivisors(N, x) << std::endl;
}