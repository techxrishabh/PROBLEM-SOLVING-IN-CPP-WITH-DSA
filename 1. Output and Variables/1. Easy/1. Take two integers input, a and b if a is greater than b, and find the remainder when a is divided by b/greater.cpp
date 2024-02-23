// Take two integers input, a and b : a>b, and find the remainder when a is divided by b.

// Dividend = divisor X quotient + remainder
// so, remainder = dividend / divisor x quotient

#include <iostream>
using namespace std;
int main(){
    int a, b, c, r;

    cout << "Enter the integer a : \n";
    cin >> a;
    cout << "Enter the integer b : \n";
    cin >> b;

    if (a>b)
    {
        c = a/b;
        r = a-b*c;
        cout << "The remainder is " << r <<"\n";
    }
    

}