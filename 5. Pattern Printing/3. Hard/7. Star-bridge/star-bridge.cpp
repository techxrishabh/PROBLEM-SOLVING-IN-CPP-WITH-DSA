// print the pattern  star bridge

// *******
// *** ***
// **   **
// *     *


#include <iostream>
using namespace std;
int main(){
    int nsp = 3;
    int nst = 5;
    for (int i = 1; i <= 7; i++)
    {
        cout << "*";
    }
    cout << "\n";
    
    for (int i = 1; i <= 8; i++)
    {
        
        for (int j = nsp; j > 0; j--)
        {
            cout << "*";
        }
        for (int k = nst; k <= 5; k++)
        {
            cout << " ";
        }
        for (int n = nsp; n > 0; n--)
        {
            cout << "*";
        }
        
        
        nsp--;
        nst = nst - 2;
    cout << "\n";
    }
    
}