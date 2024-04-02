// Print the following pattern
// Input: n = 5
// Output:
//           1
//         1 2 3
//       1 2 3 4 5
//     1 2 3 4 5 6 7


#include <iostream>
using namespace std;
int main(){
    int nsp = 1;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4-i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= nsp; k++)
        {
            cout << k;
        }
        cout << "\n";
        nsp = nsp + 2;
        
    }
    

}