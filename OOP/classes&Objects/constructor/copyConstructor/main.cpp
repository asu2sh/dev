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

        // copy constructor with a Wall object as parameter
        // copies data of the obj parameter

        //* The copy constructor in C++ is used to 
        //* copy data of one object to another.

        Wall(Wall &obj){            // i.e. &obj = &wall1
            length = obj.length;
            height = obj.height;
        }

        double calculateArea(){
            return length * height;
        }
};

int main(){

    // create an object of Wall class
    Wall wall1(13.46, 69.010);

    // copy contents of wall1 and wall2
    Wall wall2 = wall1;

    std::cout << "Area of wall1: " << wall1.calculateArea() << "\n"
              << "Area of wall2: " << wall2.calculateArea() << std::endl;

    //* A constructor is primarily used to initialize objects.
    //* They are also used to run a default code when an object is created.

}