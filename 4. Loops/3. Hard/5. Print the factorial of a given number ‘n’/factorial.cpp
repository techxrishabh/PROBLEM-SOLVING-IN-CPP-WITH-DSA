// Print the factorial of a given number ‘n’.

// 5 = 5 * 4 * 3 * 2 * 1;

#include <iostream>
using namespace std;
int main(){
    int n;
    int factorial = 1;
    cout << "Enter the Number : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        factorial = factorial * (n - i);
        
    }
    
    cout << factorial;


}

