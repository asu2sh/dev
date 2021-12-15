#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int foo(int t[],int i,int j){
    if(i==j){
        return 0;
    }
    int k;
    int min=INT_MAX;
    int count;
    for(k = i;k<j;k++){
        count = foo(t,i,k)+foo(t,k+1,j)+t[i-1]*t[k]*t[j];
        if(count<min){
            min = count;
        }
    }
    return min;
}

int main(){

foo()


}

