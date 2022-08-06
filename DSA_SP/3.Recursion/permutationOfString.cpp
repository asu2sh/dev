#include <iostream>
#include <string>

void permute(std::string str, int i=0){

    if(i == str.length()-1){
        std::cout << str << std::endl;
        return;
    }

    for(int j=i; j< str.length(); j++){

        std::swap(str[i], str[j]);
        permute(str, i+1);
        std::swap(str[i], str[j]);
    }
}

int main(){

    std::string str;
    std::cin >> str;
    permute(str);
}