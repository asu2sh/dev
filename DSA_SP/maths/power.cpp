#include <iostream>

int power(int a, int b){

    int res = 1;
    
    while(b>0){
        if(b%2!=0)
            res = res * a;
            
        a = a*a;
        b = b/2;
    }  
    return res;  
}


int main(){

    int a, b;
    std::cin >> a >> b;
    std::cout << power(a, b) << std::endl;
}


//? Recursive Solution: O(logn)
// int power(int a, int b){

//     if(b==0)    return 1;

//     int res = power(a, b/2);
//     res = res * res;

    //* Above: this is due to fact that a power b = a power b/2 * a power b/2
    //* Below: if b is odd then, it is even + 1

//     if(b%2==0)
//         return res;
//     else
//         return res * a;
// }


//* Naive Approach: O(n)
// int power(int a, int b){

//     int res = 1;    // this step is essential for b=0
//     while(b>0){
//         res *= a;
//         b--;
//     }
//     return res;
// }

