#include <iostream>

// gcd(a,b) = gcd(a-b, b) --> Euclid
int gcd(int a, int b){

    if(b==0)
        return a;
    else
        return gcd(b, a%b);

}

// this will also reverse the number due to the fact if a < b
//!     if (x < y)
//!         x % y = x
// if a > b then no reverse and it will continue as it should be

int main(){

    int a, b;
    std::cin >> a >> b;
    std::cout << gcd(a, b) << std::endl;
}

//! Note:
//?     GCD is also related to a puzzle where we find largest square which is
//?     required to fill the rectangle of size aXb.
