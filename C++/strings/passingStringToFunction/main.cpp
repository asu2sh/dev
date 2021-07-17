#include <iostream>

void display(char *);
void display(std::string);

int main(){

    char s1[20];
    std::string s2;

    std::cout << "Enter your Name : " ;
    std::cin.getline(s1, 20);

    std::cout << "Enter your College : " ;
    getline(std::cin, s2);

    display(s1);
    display(s2);

    return 0;
}

void display(char s[]){
    std::cout << "Your name is " << s << "." << std::endl;
}

void display(std::string s){
    std::cout << "Your College name is " << s << "." << std::endl;
}