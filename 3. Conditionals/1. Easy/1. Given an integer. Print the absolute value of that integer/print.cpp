// Given an integer. Print the absolute value of that integer.

// So in practice "absolute value" means to remove any negative sign in front of a number, and to think of all numbers as positive (or zero).

// More Examples:

// The absolute value of −9 is 9
// The absolute value of 3 is 3
// The absolute value of 0 is 0
// The absolute value of −156 is 156


// Absolute Value Symbol

// To show that we want the absolute value of something, we put "|" marks either side (they are called "bars" and are found on the right side of a keyboard), like these examples:
// |−5| = 5 	|7| = 7

// Sometimes absolute value is also written as "abs()", so abs(−1) = 1 is the same as |−1| = 1



#include <iostream>
using namespace std;
int main(){
    int a;
    cout << "Enter the number : ";
    cin >> a;
    if(a>0){
        cout << a;
    } else {
        cout << -a;
    }
}