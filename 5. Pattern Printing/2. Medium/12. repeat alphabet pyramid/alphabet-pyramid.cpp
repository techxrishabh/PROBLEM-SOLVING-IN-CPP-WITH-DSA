// Print the following pattern
// Input: n = 4
// Output:

//       A
//     B A B
//   C B A B C
// D C B A B C D


#include <iostream>
using namespace std;
int main(){
    int nsp = 65;
    int x = 65;
    int y = 0;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4-i; j++)
        {
            cout << " ";
        }
        for (int k = x; k >= nsp; k--)
        {
            cout << char(k);
        }
        for (int m = 65; m <= 65+y; m++)
        {
            if (m == 65)
            {
                cout << "";
            } else {

            cout << char(m);
            }
            
        }
        
        cout << "\n";
        x = x + 1;
        y = y + 1;
        
        
    }
    
}