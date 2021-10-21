#include <iostream>

void print(char* C){   // compiler interpets char C[] as char* C ...
// void print(const char* C){ // this makes it read only ...

    // int i = 0;
    // while(C[i] != '\0'){    // *(C+i) = C[i]
    //     std::cout << C[i];
    //     i++;
    // }

    while(*C != '\0'){
        std::cout << *C;    // C in place of *C returns --> 123452345345455
        C++;
    }
    std::cout << '\n';
}

int main(){

    char C[20] = "12345"; // string gets stored in the space of array
    // char *C = "12345"; //string gets stored as compile time CONSTANT
                          // => C[0] = '9'; doesn't work i.e. gives an error 

    print(C);
}