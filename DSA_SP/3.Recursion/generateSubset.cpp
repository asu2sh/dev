#include <iostream>
#include <string>

void solve(std::string ip, std::string op){

    if(ip.length()==0){
        std::cout << op << " ";
        return;
    }

    std::string op1 = op;
    std::string op2 = op + ip[0];

    ip.erase(ip.begin() + 0);

    solve(ip, op1);
    solve(ip, op2);
    return;
}

int main(){

    std::string ip;
    std::cin >> ip;
    std::string op = "";

    solve(ip, op);
}

// void subset(std::string str, std::string curr = "", int i=0){

//     if(i == str.length()){
//         std::cout << curr << "\n";
//         return;
//     }

//     subset(str, curr, i+1);
//     subset(str, curr + str[i], i+1);
// }

// int main(){

//     std::string str;
//     std::cin >> str;

//     subset(str);
// }