#include <iostream>
#include <algorithm>

struct Point{
    int x, y;
};

bool myComp(Point p1, Point p2){
    return (p1.x < p2.x);
}

int main(){

    Point arr[] = {{3, 10}, {2, 8}, {5, 4}};

    std::sort(arr, arr + 4, myComp);

    for(auto i: arr)
        std::cout << i.x << " " << i.y << std::endl;
}