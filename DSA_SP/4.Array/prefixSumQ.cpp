// Efficiently perform large no. of queries on the Array
#include <iostream>

// Prefix Sum Technique: O(max(n, k))
int pSum[1000];

void prefixSum(int arr[], int n){

    pSum[0] = arr[0];
    for(int i=1; i<n; ++i)
        pSum[i] = pSum[i-1] + arr[i];
}

int getSum(int pSum[], int l, int r){

    if(l == 0)
       return pSum[r];

    return pSum[r] - pSum[l-1];
}


// Naive: O(n*k)
void qryRes(int arr[], int n, int  qry[], int k){

    for(int j=0; j<2*k; j+=2){
        int sum = 0;
        for(int i=qry[j]; i<=qry[j+1]; i++){
            sum += arr[i];
        }
        std::cout << "getSum(" << qry[j] << ", " << qry[j+1] << ") = " << sum << std::endl;
    }
}

int main(){

    int n, k;
    std::cin >> n >> k;

    int arr[n];
    int qry[2*k];
    
    for(int i=0; i<n; ++i)
        std::cin >> arr[i];
    
    for(int i=0; i<2*k; ++i)
        std::cin >> qry[i];
    
    // qryRes(arr, n, qry, k);

    prefixSum(arr, n);
    for(int i=0; i<2*k; i+=2){
        int l = qry[i];
        int r = qry[i+1];
        std::cout << "getSum(" << l << ", " << r << ") = " 
                    << getSum(pSum, l, r) << std::endl;
    }

}