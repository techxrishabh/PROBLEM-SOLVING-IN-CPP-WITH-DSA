//   *
//  * *
// *   *
//*     *
// *   *
//  * *
//   *

#include <iostream>
using namespace std;
int main(){
    int nsp = 0;
    int nst = 1;

    for (int i = 1; i <= 1; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= 1; k++)
        {
            cout << "*";
        }

    }
    cout << "\n";
    
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 3-nsp; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= 1; k++)
        {
            cout << "*";
        }
        for (int l = 1; l <= nst; l++)
        {
            cout << " ";
        }
        for (int m = 1; m <= 1; m++)
        {
            cout << "*";
        }
        
    nst = nst + 2;
    cout << "\n";
    nsp = nsp + 1;
        
        
    }
    int t = 0;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= 1; k++)
        {
            cout << "*";
        }
        for (int m = 1; m <= 5-t; m++)
        {
            cout << " ";
        }
        for (int n = 1; n <= 1; n++)
        {
            cout << "*";
        }
        
            t = t + 2;
        cout << "\n";
    }
    for (int i = 1; i <= 1; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= 1; k++)
        {
            cout << "*";
        }

    }
    cout << "\n";
    
}