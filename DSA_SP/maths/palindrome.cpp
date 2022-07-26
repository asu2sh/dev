#include <iostream>
#include <string>
#include <algorithm>

bool palindrome(std::string n){

    std::string x = n;
    reverse(x.begin(), x.end());

    //? Note:
    //       If 'n' is an integer then we can convert it to string using
    //?      std::string stringName = to_string(integer value);
    //       Similarly, string is converted to integer using
    //?      int n;
    //?      n = std::stoi(stringName);

    return(x==n);
}

// bool palindrome(int);

int main(){
    std::string n;
    // int n;
    std::cin >> n;
    std::cout << palindrome(n) << std::endl;
}

//! Using Numbers:
bool palindrome(int n){

    int revNum = 0;
    int temp = n;
    while(n!=0){
        revNum = revNum*10 + n%10;
        n /= 10;
    }
    // return (revNum == temp);
    return revNum = temp ? true : false;

}
