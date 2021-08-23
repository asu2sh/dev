#include <iostream>

class Complex {

    private:
        double real;
        double imag;
    
    public:
        // Constructor to initialize real and imag to 0
        Complex() : real(0), imag(0) {}

        void input() {
            std::cout << "Enter real and imaginary parts respectively: ";
            std::cin >> real;
            std::cin >> imag;
        }

        Complex operator + (const Complex& obj) {
            Complex temp;
            temp.real = real + obj.real;
            temp.imag = imag + obj.imag;
            return temp;
        }

        void output(){
            if (imag < 0)
                std::cout << "Output Complex number: " 
                          << real << imag << "i" << std::endl;
            else
                std::cout << "Output Complex number: " 
                          << real << "+" << imag << "i" << std::endl;
        }
};

int main() {
    Complex complex1, complex2, result;

    std::cout << "Enter first complex number:\n";
    complex1.input();

    std::cout << "Enter second complex number\n";
    complex2.input();

    result = complex1 + complex2;
    result.output();

}

//* In this program, the operator function is:
    // Complex operator + (const Complex& obj) {
        //     // code
    // }

//* Instead of this, we also could have written this function like:
    // Complex operator + (Complex obj) {
        //     // code
    // }

//* However,
//! using & makes our code efficient by referencing the complex2 object instead of,
//! making a duplicate object inside the operator function.
//! using const is considered a good practice because it prevents the operator function from modifying complex2.