// Print the nth fibonacci number.

// fibonacci Number : 0 1 1 2 3 5 8 13 21 34 55 89 .... 

// here 0 = -1 + 1
// 1 = 0 + 1
// 2 = 1 + 1

// let assume that a = -1, b = 1 and c = 0;

#include <iostream>
using namespace std;
int main(){
    int num;
    int c;
    int a = -1;
    int b = 1;
    cout << "Enter the number : ";
    cin >> num;

    for (int i = 0; i <= num; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }

    cout << c;
    

}