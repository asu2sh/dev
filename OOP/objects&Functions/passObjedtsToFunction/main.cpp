#include <iostream>

class Student{

    public:
        double marks;
    
        Student(double m){
            marks = m;
        }
};

void calculateAverage(Student s1, Student s2){

    double average = (s1.marks + s2.marks) / 2;

    std::cout << "Average Marks = " << average << std::endl;

}

int main(){

    Student student1(68.0), student2(78.69);

    // pass the objects as arguments
    calculateAverage(student1, student2);

}