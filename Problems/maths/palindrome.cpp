// Palindrome Number: 121, 7, 66, 78987
#include <iostream>

bool isPalindrome(int num){

    int revNum = 0;
    int temp = num;
    while(temp != 0){
        revNum = revNum * 10 + temp % 10;
        temp = temp / 10;
    }
    // return num == revNum ? true : false;
    return (revNum == num);
    
}

int main(){

    int num;
    std::cin >> num;
    std::cout << isPalindrome(num) << std::endl;

}