// Print the factorials of first ‘n’ numbers
// Sample Input : 10
// Output :
// 1
// 2
// 6
// 24
// 120
// 720
// 5040
// 40320
// 362880
// 3628800

#include <iostream>
using namespace std;
int main(){
    int j;
    int n;
    cout << "Enter a Number : ";
    cin >> n;
    int factorial = 1;

    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
        cout << factorial << "\n";
    }
    
}