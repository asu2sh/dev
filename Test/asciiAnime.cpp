// #include <iostream>
// #include <unistd.h> // for sleep()

// int main()
// {

//     std::cout << "Loading Please Wait";
//     while (true)
//     {
//         sleep(1);
//         std::cout << "." << std::flush;
//         sleep(1);
//         std::cout << "." << std::flush;
//         sleep(1);
//         std::cout << "." << std::flush;
//         sleep(1);
//         std::cout << "\b\b\b   \b\b\b" << std::flush;
//     }
// }
#include <iostream>
#include <unistd.h> // for sleep()

int main()
{
    std::cout << '-' << std::flush;
    for (;;) {
        sleep(.1);
        std::cout << "\b\\" << std::flush;
        sleep(.1);
        std::cout << "\b|" << std::flush;
        sleep(.1);
        std::cout << "\b/" << std::flush;
        sleep(.1);
        std::cout << "\b-" << std::flush;

    }
}


