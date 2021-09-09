#include <iostream>
#include <vector>
#include <numeric>

void lastCard(int n){

    std::vector<int> card(n);
    std::iota(card.begin(), card.end(), 1);
    int count = 0;

    for(int i=0; i<n; ++i){ 
        card.erase(card.begin());
        card.push_back(card[i]);
        count++;    
    }
    // return card.back();
    for(const int &i: card)
        std::cout << i << std::endl;
    std::cout << "Iterations: " << count << std::endl;
}

int main(){

    int num;
    std::cin >> num;
    // std::cout << lastCard(num) << std::endl;
    lastCard(num);

}