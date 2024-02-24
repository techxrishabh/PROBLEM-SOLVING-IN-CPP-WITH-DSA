// Take float input and print the fractional part of the real number.

// in this code if we give 3.4 then we should get 0.4 and 
// if we give -1.4 then we should get 0.6 

#include <iostream>
using namespace std;
int main(){
    float x; // -1.4
    cout << "Enter the number x : "; // -1.4
    cin >> x;
    int y = (int)x; // -1
    if(y<0) y = y - 1; // -2
    float z = (float)y; // z = -2.0
    x = x - z; // -1.4 - (-2.0) = 0.6
    cout << x;


}