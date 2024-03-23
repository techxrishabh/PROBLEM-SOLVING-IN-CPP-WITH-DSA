// Print the given pattern

//    *
//   ***
//  *****
// *******


#include <iostream>
using namespace std;
int main(){
    int a = 1;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 4-i; j <= 4-i && j >= 0; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= a; k++)
        {
            cout << "*";
        }
        a = a+2;
        cout << "\n";
        
        
    }
    
}