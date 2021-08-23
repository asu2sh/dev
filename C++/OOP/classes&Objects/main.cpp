#include <iostream>

/*
    class className{
        // some data
        // some functions
    } ;

*/

// Syntax to define Object:
// className objectVariableName;

class Room {

    // members are public and can be accessed anywhere from the program
    public:
        double length;
        double breadth;
        double height;

        double calculateArea(){
            return length * breadth;
        }

        double calculateVolume(){
            return length * breadth * height;
        }
};

int main(){

    // create object of Room class
    Room room1;

    room1.length = 13.26;
    room1.breadth = 69.13;
    room1.height = 46.07;

    std::cout << "Area of Room = " << room1.calculateArea() << std::endl;
    std::cout << "Volume of Room = " << room1.calculateVolume() << std::endl;

}