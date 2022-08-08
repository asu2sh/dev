#include <iostream>
#include <string>

/**
 * For each character in the string, swap it with the first character, and then recursively call the
 * function on the rest of the string
 * 
 * @param str The string to be permuted
 * @param i the index of the string we're currently permuting
 * 
 * @return A string
 */
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