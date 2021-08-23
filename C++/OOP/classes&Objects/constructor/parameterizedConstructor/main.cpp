#include <iostream>

class Wall{

    private: 
        double length;
        double height;
    
    public:
        Wall(double len, double hgt){
            length = len;
            height = hgt;
        }

        double calculateArea(){
            return length * height;
        }
};

int main(){

    int l, h;

    std::cout << "Enter length: ";
    std::cin >> l;
    std::cout << "Enter Height: ";
    std::cin >> h;

    Wall wall1(l, h);
    Wall wall2(23, 56);

    
    std::cout << "Area of wall 1: "<< wall1.calculateArea() << std::endl;
    std::cout << "Area of wall 2: "<< wall2.calculateArea() << std::endl;

}