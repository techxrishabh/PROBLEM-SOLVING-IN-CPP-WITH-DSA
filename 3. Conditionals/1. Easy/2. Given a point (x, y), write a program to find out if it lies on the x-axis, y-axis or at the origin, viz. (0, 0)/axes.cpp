// Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).

#include <iostream>
using namespace std;
int main(){
    int x, y;
    cout << "Enter the value of x co-ordinate : ";
    cin >> x;
    cout << "Enter the value of y co-ordinate : ";
    cin >> y;

    if (x == 0 && y == 0)
    {
        cout << "The vertex is on origin";

    } else if ((x > 0 || x < 0) && y == 0){

        cout << "The vertex is on x-axis";

    } else if ((y > 0 || y < 0) && x == 0){
        cout << "The vertex is on y-axis";
    } else {
        cout << "The vertex is not on any axis";
    }
    
    

}