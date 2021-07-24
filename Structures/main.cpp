#include <iostream>

struct Person
{
    char name[50];
    int age;
    float salary;
};                  // remember to end a declaration with a semicolon(;)

void displayData(Person);   // Function Declaration

int main(){

    Person p;

    std::cout << "Enter Full Name: ";
    std::cin.getline(p.name, 50);

    std::cout << "Enter Age: ";
    std::cin >> p.age;

    std::cout << "Enter Salary: ";
    std::cin >> p.salary;

    displayData(p);

}

void displayData(Person p){

    std::cout << "\nDisplaying Information." << std::endl;
    std::cout << "Name: " << p.name << std::endl;
    std::cout << "Age: " << p.age << std::endl;
    std::cout << "Salary: " << p.salary << std::endl;

}