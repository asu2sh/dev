#include <iostream>

void print(char* C){   // compiler interpets char C[] as char* C ...

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

    char C[20] = "12345";
    print(C);
}