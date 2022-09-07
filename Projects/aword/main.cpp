#include <iostream>

int main(){
    std::string word = "PAUSE";
    std::string guessWord;
    
    for(int k=0; k<5; k++){
        std::cin >> guessWord;

        for(int i=0; i<5; i++){
            for(int j=0; j<5; j++){
                if(guessWord[i] == word[i]){
                    std::cout <<" ["<< guessWord[i] <<"] ";
                    break;
                }
                if(guessWord[i] != word[j]){
                    std::cout <<" {"<< guessWord[i] <<"} ";
                    break;
                }
                else{
                    std::cout <<" ("<< guessWord[i] <<") ";
                    break;
                }
            }
        }
        std::cout << std::endl;
    }
}
