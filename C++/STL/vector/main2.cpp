#include <iostream>
#include <vector>

int main(){

    std::vector<int> vec;
    // vec.reserve(15);
    for(int i = 0; i < 20; ++i){
        vec.push_back(i);
        std::cout << vec.size() << " " << vec.capacity() << std::endl;
    }
}