#include <iostream>

int main(){

    char C1[] = "asutosh";

    char* C2 = C1; // C1 = C2 is illegal, so is C1 = C1 + 1,  but C2++ is fine...

    std::cout << C2[3] << std::endl;

    C2[3] = 'S';        //! C2[i] = *(C2 + i)

    std::cout << C2 << std::endl;


}