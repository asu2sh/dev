#include <iostream>
#include <string>

int main(){

    std::string str;
    getline(std::cin, str);

    str[0] = toupper(str[0]);
    for(int i=1; i< str.size(); i++){
        if(str[i]==' ')
            str[i+1] = toupper(str[i+1]);
    }
    std::cout << str << std::endl;
}