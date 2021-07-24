#include <iostream>

int main(){

    int num;
    std::cout << "Enter the no. of semesters: ";
    std::cin >> num;

    float* ptr;

    // float has 7digits of precision while double has 15digits of precision
    // float is faster and consumes less memory...

    ptr = new float[num];
    // memory allocation of num number of floats

    std::cout << "Enter SGPA: " << std::endl;
    double sum = 0;

    for (int i=0; i < num; ++i){
        std::cout << "Semester " << i + 1 << ": ";
        std::cin >> *(ptr + i);

        sum += *(ptr+i);
    }

    

    std::cout << "\nDisplaying SGPA: " << std::endl;
    
    for (int i = 0; i < num; ++i){
        std::cout << "Semester " << i + 1 << ": "
                  << *(ptr + i) << std::endl;
        
    }

    double avg;
    avg = double(sum) / double(num);
    std::cout << sum << "\nAverage GPA: " << avg << std::endl; 

    delete[] ptr;


    return 0;

}