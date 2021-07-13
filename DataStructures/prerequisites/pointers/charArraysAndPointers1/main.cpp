#include <iostream>
#include <string.h>

int main(){

        char C[5] = "ASUR"; // even C[] = "ASUR" works fine...
        // char C[4] doesn't work as it has to store the NULL character i.e. '\0'.
        // C[0] = 'A';
        // C[1] = 'S';
        // C[2] = 'U';
        // C[3] = 'R';
        // C[5] = {'A', 'S', 'U', 'R', '\0'}; 
        // null character is not implicit here as above...

        std::cout << C << std::endl;

        int len = strlen(C);
        std::cout << len << std::endl;

    
}