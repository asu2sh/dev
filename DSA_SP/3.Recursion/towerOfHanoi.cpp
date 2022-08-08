/**
 * The function takes in the number of disks, the source, the auxiliary and the destination. It then
 * recursively calls itself to move the top n-1 disks from the source to the auxiliary, then moves the
 * nth disk from the source to the destination, and then recursively calls itself to move the n-1 disks
 * from the auxiliary to the destination
 * 
 * @param n number of disks
 * @param A Source
 * @param B The buffer
 * @param C The destination tower
 * 
 * @return the number of moves required to move n disks from A to C.
 */
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

// to count the steps we can simply return
//*         pow(2, n) - 1;