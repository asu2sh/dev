/**
 * The function takes in a number n and an array of size n denoting the digits to be pressed. The
 * function returns a vector of all the possible strings that can be produced by pressing these digits
 * on the keypad
 * 
 * @param n Number of digits in the input number.
 * @param arr An array of integers that represent the digits that need to be considered.
 * @param keymap A vector of strings where each string represents a set of characters that can be
 * produced by the corresponding digit on a phone keypad.
 * @param ans vector of strings that will store the final answer
 * @param str The string that is being formed at any step.
 * @param index The index of the current element in the array arr.
 * 
 * @return A vector of strings.
 */
#include <iostream>
#include <vector>
#include <string>

void solve(int n, std::vector<int> arr, std::vector<std::string> keymap, std::vector<std::string> &ans, std::string str, int index){

    if(index == arr.size()){
        ans.push_back(str);
        return;
    }

    int number = arr[index];
    std::string value = keymap[number];

    for(int i=0; i<value.length(); i++){
        str.push_back(value[i]);
        solve(n, arr, keymap, ans, str, index+1);
        str.pop_back();
    }
}

std::vector<std::string> keypad(int n, std::vector<int> arr){

    std::vector<std::string> keymap = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    std::vector<std::string> ans;
    std::string str = "";
    int index = 0;
    
    solve(n, arr, keymap, ans, str, index);
    return ans;
}

int main(){

    int n;
    std::cin >> n;
    std::vector<int> arr(n);

    for(int i=0; i<n; i++)
        std::cin >> arr[i];

    std::vector<std::string> res = keypad(n, arr);

    for(std::string i: res)
        std::cout << i << std::endl;
}