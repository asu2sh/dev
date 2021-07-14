#include <iostream>

int main(){

    int A[2][3] = {{2, 3, 6}, {4, 5, 8}};

    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            std::cout << A[i][j] << std::endl;
        }
    }
    

}