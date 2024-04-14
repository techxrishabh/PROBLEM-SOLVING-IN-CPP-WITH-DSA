//   1
//  2 2
// 3   3
//4     4

#include <iostream>
using namespace std;
int main(){
    int nsp = 2;
    for (int i = 1; i <= 3; i++)
    {
        cout << " ";
    }
    cout << "1";
    cout << "\n";

    

    for (int i = 2; i <= 4; i++)
    {
        for (int j = 1; j <= 4-i; j++)
        {
            cout << " ";
        }
        for (int k = i; k <= i; k++)
        {
            cout << k;
        }
        for (int m = 2; m <= nsp; m++)
        {
            cout << " ";
        }
        for (int n = i; n <= i; n++)
        {
            cout << n;
        }
        
        cout << "\n";
        nsp = nsp + 2;
        
        
    }
    
}