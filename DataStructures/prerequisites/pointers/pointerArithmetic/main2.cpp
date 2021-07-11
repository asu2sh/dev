#include<iostream>

int main(){

    int a = 1025;
    int *p;
    p = &a;
    //int *p = new int(1025);

    std::cout << "Size of int = " << sizeof(int) << std::endl;
    std::cout << "Address of a = " << p << "\nValue of a = " << *p << std::endl;
    std::cout << "Address of a+1 = " << p+1 << "\nValue of a+1= " << *(p+1) << std::endl;
    std::cout << "\n";

    char *p0;
    p0 = (char*)p;
    //char *p0 = reinterpret_cast <char *>(p);
    std::cout << "Size of char = " << sizeof(char) << std::endl;

    std::cout << "Address of p0 = " << (int*)p0 << "\nValue of p0 = " << (int)*p0 << std::endl;
    std::cout << "Address of p0+1 = " << (int*)(p0+1) << "\nValue of p0+1 = " << (int)*(p0+1) << std::endl;

    //*1025 = 00000000 00000000 00000100 00000001

}

    //! reinterpret_cast in C++ | Type Casting operators
    // It is used to convert one pointer of another pointer of any type,
    // no matter either the class is related to each other or not.
    // It does not check if the pointer type and data pointed by the pointer is same or not.
    //! Syntax : data_type *var_name = reinterpret_cast <data_type *>(pointer_variable);
    //Return Type :It doesn’t have any return type. It simply converts the pointer type.