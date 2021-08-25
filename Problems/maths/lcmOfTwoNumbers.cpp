#include <iostream>

int gcd(int a, int b){

    if(b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int lcm(int a, int b){
    
    return (a * b)/gcd(a, b);
    
    // int n1 = std::min(a, b);
    // int n2 = std::max(a, b);
    // int temp = 1, res;

    // do{
    //     res = n2 * temp;
    //     temp++;   
    // }while(res % n1 != 0);

    // return res;
}

int main(){

    int num1, num2;
    std::cin >> num1 >> num2;
    std::cout << lcm(num1, num2) << std::endl;

}