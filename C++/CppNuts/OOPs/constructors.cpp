#include <iostream>

class Point{

    double x;
    double y;
public:

    Point(){ x = 0; y = 0;} // default constructor

    Point(double X, double Y){ x = X; y = Y;}   // parameterized construtor

    Point(const Point& rhs){ x = rhs.x; y = rhs.y;} // copy constructor
    
};

int main(){

    Point p1;
    Point p2(1.3, 3.4);
    Point p3 = p1;
}