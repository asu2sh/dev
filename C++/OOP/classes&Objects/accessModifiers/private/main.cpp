#include <iostream>

// private members can only be accessed from within the class.
// However, friend classes and friend functions can access private members.

class Sample{

    private:
        int age;
    
    public:
        void displayAge(int a){
            age = a;
            std::cout << "\nAge = " << age << std::endl;
        }
};

int main(){

    Sample obj1;
    Sample obj2;

    int enterAge;
    std::cout << "Enter Your Age: ";
    std::cin >> enterAge;

    obj1.displayAge(enterAge);


}
