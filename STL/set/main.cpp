//! Syntax:
//*         std::set<T> objectName;

//  1. std::set is an Associative Container,
//     that contains a sorted set of unique Objects of type Key.
//  2. It is usually implemented using Red-Black Tree.
//  3. If we want to store user defined data type in set then we will have to 
//     provide compare functions so that set can store them in sorted order.
//  4. Insertion, Removal, Search have Logarithmic complexity.
//  5. We can pass the order of sorting while constructing set object.

//  It stores unique elements and they are stored in sorted order.

#include <iostream>
#include <set>
#include <functional>

class Person{
    public:
        float age;
        std::string name;
    
    bool operator < (const Person& rhs) const {return age < rhs.age;}
    bool operator > (const Person& rhs) const {return age > rhs.age;}

};

int main(){

    std::set<int> Set = {1, 2, 5, 4, 5, 1, 2, 3, 6, 5};

    for(const auto& e: Set)
        std::cout << e << std::endl;
    
    std::set<Person, std::greater<>> SetPerson = {{21, "asu2sh"}, {23, "shubham"}, {19, "Dolly"}};

    for(const auto& e: SetPerson)
        std::cout << e.age << " "
                  << e.name << std::endl;
    
    return 0;
}