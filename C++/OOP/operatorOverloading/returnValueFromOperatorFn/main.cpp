#include <iostream>

class Count {

    private:
        int value;
    
    public:
        // Constructor to initialize count to 5
        Count() : value(5) {}
        // Initializer List is used in initializing the data members of a class.
        // The list of members to be initialized is indicated with constructor as a comma-separated list followed by a colon.

        Count operator ++ (){
            Count temp;

            // Here, value is the value attribut of the calling ovject
            temp.value = ++value;

            return temp;
        
        }

        // Overload ++ when used as postfix
        Count operator ++ (int){
            Count temp;

            // Here, value is the value attribute of the calling object
            temp.value = value++;

            return temp;
        }

        void display(){
            std::cout << "Count: " << value << std::endl;
        }
};   

int main(){
    Count count1, result;

    result = ++count1; 
    result.display();

    result = count1++;
    result.display();

}