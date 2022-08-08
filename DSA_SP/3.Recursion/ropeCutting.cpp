/**
 * If the number of pieces is 0, return 0. If the number of pieces is negative, return -1. Otherwise,
 * return the maximum of the number of pieces that can be made from the number of pieces minus the
 * length of each of the three rods, plus 1
 * 
 * @param n the length of the rod
 * @param a length of the first piece
 * @param b length of the second piece
 * @param c length of the third piece
 * 
 * @return The maximum number of pieces that can be cut from a rod of length n.
 */
#include <iostream>
#include <algorithm>

int maxPieces(int n, int a, int b, int c){

    if(n==0)    return 0;
    if(n<0)    return -1;

    int res = std::max(std::max(maxPieces(n-a, a, b, c),
                                maxPieces(n-b, a, b, c)),
                                maxPieces(n-c, a, b, c));

    if(res < 0)
        return -1;
    else
        return res + 1;

}

int main(){

    int n, a, b, c;
    std::cin >> n >> a >> b >> c;
    std::cout << maxPieces(n, a, b, c);
}