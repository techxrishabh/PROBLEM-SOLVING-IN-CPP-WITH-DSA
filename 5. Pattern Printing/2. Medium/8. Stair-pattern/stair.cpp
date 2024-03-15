// Print the following pattern
// Sample Input : n = 4
// Output :


//    ****
//   ****
//  ****
// ****


#include <iostream>
using namespace std;
int main(){
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 4-i; j > 0; j--)
        {
            cout << " ";
        }
        for (int k = 4; k > 0; k--)
        {
            cout << "*";
        }
        
        
    cout << "\n";
    }
    
}
