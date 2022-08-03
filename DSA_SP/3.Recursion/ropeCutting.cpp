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