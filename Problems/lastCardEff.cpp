// Q. We have a stack of n number of cards, each card numbered 1 to n from top so the first card is card 1
// & the last card is card n. Let’s say we throw away the first card & then move the 2nd card to the 
// last. Let’s keep doing this until we are just left with one card.
// So, for example if n is 3 then the cards would be 1,2,3 so for first iteration we would throw away 1 
// & move 2 to the bottom so now the stack would become 3,2. On 2nd iteration we throw away 3 & 
// we are left with only one card '2'.

#include <iostream>
#include <cmath>

void lastCard(int n){

    int count = 0;
    while(n > pow(2, count))
        count++;
    
    int gNum = pow(2, count);
    
    int result;
    result = gNum - ((gNum - n)*2);
    
    // return result;
    std::cout << result << "\nIteration: " << count << std::endl;
}

int main(){

    int num;
    std::cin >> num;
    // std::cout << lastCard(num) << std::endl;
    lastCard(num);
}

