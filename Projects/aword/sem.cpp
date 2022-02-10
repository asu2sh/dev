#include<iostream>

int main() {

    int noOfSemester;
    std::cout << "Enter number of semester:"<< std::endl;
    std::cin >> noOfSemester;
    int minimum[noOfSemester];
    int count = 0;

    for(int i=0; i < noOfSemester; i++){
        int noOfSubjects;
        std::cout << "Enter number of subjects in " << i+1 << " semester:" << std::endl;
        std::cin >> noOfSubjects;

        int marksObtained[noOfSubjects];
        std::cout << "Marks obtained in semester "<< i+1 << ":" << std::endl;

        int min = 100;
        for(int j=0; j < noOfSubjects; j++){
            std::cin >> marksObtained[j];
            if(marksObtained[j] > 100)
                count++;
            if(marksObtained[j] < min){
                min = marksObtained[j];
            }
        }
        minimum[i] = min;
    }
    if(count!=0){
        std::cout << "You have entered invalid mark" << std::endl;
    }
    else{
        for(int i=0; i < noOfSemester; i++){
            std::cout << "Minimum mark in "<< i+1 << " semester:" << minimum[i] << std::endl;
        }
    }
}