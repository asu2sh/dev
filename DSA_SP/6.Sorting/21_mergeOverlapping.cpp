#include <iostream>
#include <algorithm>

struct Interval
{
    int start, end;
};

bool mycomp(Interval x, Interval y){
    return x.start < y.start;
}

void mergeIntervals(Interval arr[], int n){

    std::sort(arr, arr+n, mycomp);

    int res = 0;

    for(int i=1; i<n; ++i){

        if(arr[i].start <= arr[res].end){

            arr[res].start = std::min(arr[res].start, arr[i].start);
            arr[res].end = std::max(arr[res].end, arr[i].end);
        }
        else{

            res++;
            // arr[res] = arr[i];
            arr[res].start = arr[i].start;
            arr[res].end = arr[i].end;
        }
    }

    for(int i=0; i<=res; ++i)
        std::cout << arr[i].start << " " << arr[i].end << std::endl;

}

int main(){

    int n;
    std::cin >> n;

    Interval arr[n];

    for(int i=0; i<n; ++i){
        std::cin >> arr[i].start >> arr[i].end;
    }

    mergeIntervals(arr, n);
}