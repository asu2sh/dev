#include <iostream>
#include <vector>
#include <numeric>

int lastCard(int n){

    std::vector<int> card(n);
    std::iota(card.begin(), card.end(), 1);

    for(int i=0; i<n; ++i){ 
        card.erase(card.begin());
        card.push_back(card[i]);       
    }
    return card.back();
}

int main(){

    int num;
    std::cin >> num;
    std::cout << lastCard(num) << std::endl;

}