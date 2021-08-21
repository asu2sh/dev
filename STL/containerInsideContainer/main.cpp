#include <iostream>
#include <vector>

int main(){

    std::vector<std::vector<int>> Tree;
    int edge, n1, n2;

    std::cin >> edge;
    Tree.resize(edge);

    for(int i = 0; i < edge; ++i){
        std::cin >> n1 >> n2;
        Tree[n1].push_back(n2);
    }

    for(const auto &e1: Tree){
        for(const auto &e2: e1)
            std::cout << e2;
        std::cout << std::endl;
    }

    return 0;
}