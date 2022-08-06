#include <iostream>
#include <vector>
#include <string>
using namespace std;  
    
void solve(vector<int> a, int N, vector<string> keypad, vector<string> &ans, string str, int index){
        
    if(index==N){
        ans.push_back(str);
        return;
    }
        
    for(auto x: keypad[a[index]]){
            
        str.push_back(x);
        solve(a, N, keypad, ans, str, index+1);
        str.pop_back();
    }
}

vector<string> possibleWords(vector<int> a, int N){

    vector<string> ans;
    vector<string> keypad = {"", "", "abc", "def", "ghi", "jkl", 
            "mno", "pqrs", "tuv", "wxyz"};
        
    string str = "";
    int index = 0;
        
    solve(a, N, keypad, ans, str, index);
    return ans;
}

int main(){

    int N;
    cin >> N;
    vector<int> a(N);

    for(int i=0; i<N; ++i)
        cin >> a[i];

    possibleWords(a, N);
}