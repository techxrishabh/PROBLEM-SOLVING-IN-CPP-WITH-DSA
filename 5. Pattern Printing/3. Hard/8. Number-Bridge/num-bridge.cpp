// Number Bridge

// 1234567
// 123 567
// 12   67
// 1     7

#include <iostream>
using namespace std;
int main(){
    int nsp = 1;
    int t = 5;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4-i; j++)
        {
            cout << j;
        }
        for (int k = 1; k <= nsp; k++)
        {
            cout << " ";
        }
        for (int m = t; m <= 7; m++)
        {
            cout << m;
        }
        
        cout << "\n";
        nsp = nsp + 2;
        t = t + 1;
        
    }
    
}