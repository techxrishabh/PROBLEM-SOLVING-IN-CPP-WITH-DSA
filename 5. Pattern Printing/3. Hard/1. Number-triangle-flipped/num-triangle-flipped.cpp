//       1
//     1 2
//   1 2 3
// 1 2 3 4


#include <iostream>
using namespace std;
int main(){
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 4-i; j > 0; j--)
        {
            
            cout << "  ";
            
        }
        for (int k = 1; k <= i; k++)
        {
            
            cout << " " << k;
        }
        
        cout << "\n";
    }
    
}