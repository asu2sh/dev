#include <iostream>

/*
    enum seasons {spring, summer, autumn, winter};

    //default, spring is 0, summer is 1 and so on.
*/
/*
    enum boolean { false, true };

    // inside function
    enum boolean check;

    enum boolean{

        False, True

    } check;
*/

enum seasons{

    spring = 3,
    summer = 6,
    autumn = 9,
    winter = 12

} t;


int main(){

    seasons s;
    s = summer;
    t = autumn;

    std::cout << "Season = " << s << std::endl;
    std::cout << "\nSize of the enum: " << sizeof(seasons) 
              << "\nSize of enum variable s: " << sizeof(s)
              << "\nSize of enum variable t: " << sizeof(t)
              << "\nSize of autumn: " << sizeof(autumn)
              << "\nValue of winter + 57 = " << winter + 57
              << std::endl;


}