#include <iostream>
#include <cstdlib>

// cstdlib is needed for atoi()

int main()
{
    char str[] = "69xyz";

    int num = std::atoi(str);

    std::cout << "num = " << num;

    return 0;

}