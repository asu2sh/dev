#include <iostream>
#include <string>

void subset(std::string str, std::string curr = "", int i=0){

    if(i == str.length()){
        std::cout << curr << "\n";
        return;
    }

    subset(str, curr, i+1);
    subset(str, curr + str[i], i+1);
}

int main(){

    std::string str;
    std::cin >> str;

    subset(str);
}