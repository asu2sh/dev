#include <iostream>

struct Person{

    std::string name;
    int age;
    char gender;
    double salary;
};

Person getData(Person);         // getting data

void displayData(Person);       // displaying data

int main(){

    Person p;
    p = getData(p);
    displayData(p);

    return 0;

}

Person getData(Person p){

    std::cout << "Enter Full Name: ";
    getline(std::cin, p.name);

    std::cout << "Enter Age: ";
    std::cin >> p.age;

    std::cout << "Enter Gender M/F/O: ";
    std::cin >> p.gender;

    std::cout << "Enter Salary: ";
    std::cin >> p.salary;

    return p;

}

void displayData(Person p){

    std::cout << "\nDisplaying Information. " << std::endl;
    std::cout << "Name: " << p.name << std::endl;
    std::cout << "Age: " << p.age << std::endl;
    std::cout << "Gender: " << p.gender << std::endl;
    std::cout << "Salary: " << p.salary << std::endl;
}