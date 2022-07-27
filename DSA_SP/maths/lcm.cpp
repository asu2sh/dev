#include <iostream>

int gcd(int a, int b){

    if(b==0)
        return a;
    return gcd(b, a%b);
}

int lcm(int a, int b){
    return (a*b)/gcd(a, b);
}

//? This works due to the fact:
//!              a*b = gcd(a, b) * lcm(a, b)

int main(){

    int a, b;
    std::cin >> a >> b;
    std::cout << lcm(a, b) << std::endl;

}


//? Naive Solution: but better
// int lcm(int a, int b){
//     int res = std::max(a, b);
//     int temp = res;
//     while(res%a!=0 && res%b!=0){
//         res+=temp;
//     }
//     return res;
// }


//* Super Naive: coz of the fact===the LCM would be greater than or equal to the larger number
// int lcm(int a, int b){

//     int res = std::min(a,b);
//     int temp = res;
    
//     if(res%a==0 && res%b==0)
//         return res;
//     else{
//         if(res%a==0){
//             do{
//             res+=temp;
//             }while(res%b!=0);
//         return res;
//         }
//         else{
//             do{
//             res+=temp;
//             }while(res%a!=0);
//         return res;
//         }
//     }
// }