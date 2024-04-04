// Print the Pattern 

// 1 2 3 4 3 2 1
// 1 2 3   3 2 1
// 1 2       2 1
// 1           1


#include <iostream>
using namespace std;
int main(){
    int nsp = 2;
    int nst = 4;
    for (int i = 1; i <= 7 && i > 0; i++)
    {
        if (i>4)
        {
            cout << i-nsp;
            nsp = nsp + 2;
        }  else {
            cout << i;
        }
    }
        cout << "\n";
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 1; j <= 3-i; j++)
        {
            cout << j;
        }
        for (int k = 1 + nst; k <= 5; k++)
        {
            cout << " ";
        }
        for (int m = 3-i; m >= 1 && m <= 3; m--)
        {
            cout << m;
        }
        
        
        cout << "\n";
        nst = nst - 2;
        
    }
    
    
}