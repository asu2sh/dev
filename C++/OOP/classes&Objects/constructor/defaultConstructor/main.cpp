#include <iostream>

/*
 --> A constructor is a special type of member function,
    that is called automatically when an object is created.

 --> a constructor has the same name as that of the class 
    and it does not have a return type. 

    class  Wall {
        public:
            // create a constructor
            Wall() {
            // code
            }  
    };

 --> If we have not defined a constructor in our class,
    then the C++ compiler will automatically create a default constructor
    with an empty code and no parameters.

*/

//* Default Constructor ===

class Wall{

    private:
        double length;
    
    public:
        Wall(){
            length = 5.5;
            std::cout << "Creating a Wall." << std::endl;
            std::cout << "Length = " << length << std::endl;
        }
};

int main(){

    Wall wall1;
    Wall wall2;

}
