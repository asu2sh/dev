#include <iostream>

void toh(int n, char A, char B, char C){

    if(n==1){
        std::cout << n << ": " << A << "-->" << C << std::endl;
        return;
    }

    toh(n-1, A, C, B);
    std::cout << n << ": " << A << "-->" << C << std::endl;
    toh(n-1, B, A, C);
}

int main(){
    
    int n;
    std::cin >> n;

    toh(n, 'A', 'B', 'C');
}