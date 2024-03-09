// Print first ‘n’ fibonacci numbers

// fibonacci num ==> 0 1 1 2 3 5 8 13 21 34 55 89 .....

#include <iostream>
using namespace std;
int main(){
    int n;
    int a = 0;
    int b = 1;
    int c;
    cout << "Enter a Number : ";
    cin >> n;
    cout << a << "\n";
    cout << b << "\n";
    for (int i = 0; i < n; i++)
    {
        c = a + b;
        a = b;
        b = c;
        cout << c << "\n";
    }
    

}