#include <iostream>

int main(){
    
    char str1[5]= {'S','U','N','D','A'};
    char str2[5]= {'M','O','N','D','A'};

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            // if(str1[i]==str2[j])
            //     std::cout << str1[i] << " ";
            
            if(str1[i]==str2[i])
                std::cout << str1[i] << "   ";
        }
    }
}
    
