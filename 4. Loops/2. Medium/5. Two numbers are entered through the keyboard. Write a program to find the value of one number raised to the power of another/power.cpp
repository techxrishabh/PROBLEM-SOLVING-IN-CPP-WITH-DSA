// Two numbers are entered through the
// keyboard. Write a program to find the value of one
// number raised to the power of another

#include <iostream> 
using namespace std;
int main(){
    int a, b, c;
    c = 1;
    cout << "Enter Two Numbers a and b : ";
    cin >> a >> b;

    for (int i = 1; i <= b; i++)
    {
        c = c * a;
    }
    cout << c;
}