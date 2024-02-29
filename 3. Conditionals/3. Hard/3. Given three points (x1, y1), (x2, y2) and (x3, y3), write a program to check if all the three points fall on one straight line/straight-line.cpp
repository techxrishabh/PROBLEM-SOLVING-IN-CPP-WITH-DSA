// Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line.

// here if 

// y2 - y1 / x2 - x1 = y3 - y2 / x3 - x2 (then it will on the straight line)

#include <iostream>
using namespace std;
int main(){
    int x1 = 1;
    int y1 = 2;
    int x2 = 2;
    int y2 = 3;
    int x3 = 3;
    int y3 = 4;

    int x = (y2 - y1) / (x2 - x1);
    int y = (y3 - y2) / (x3 - x2);

    if (x == y)
    {
        cout << "It will fall on the straight line";
    } else {
        cout << "It will not fall on the straight line";
    }
    
}