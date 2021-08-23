#include <iostream>

class Student{

    public:
        double marks1, marks2;
};

// function that returns object of Student
Student createStudent(){

    Student student;

    // Initialize member variables of Student
    student.marks1 = 96.5;
    student.marks2 = 69.7;

    // print member variables of Student
    std::cout << "Marks 1 = " << student.marks1 << std::endl;
    std::cout << "Marks 2 = " << student.marks2 << std::endl;

    return student;

}

int main(){

    Student student1;

    // Call Function
    student1 = createStudent();

}