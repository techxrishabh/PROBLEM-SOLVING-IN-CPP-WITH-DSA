// Take positive integer input and tell if it is a three digit number or not

#include <iostream>
using namespace std;
int main(){
    int a;
    cout << "Enter the number : ";
    cin >> a;
    if (a > 99 && a < 1000) cout << "Its 3 digit number";
    else {
        cout << "nope, Its not three digit number";
    }
}