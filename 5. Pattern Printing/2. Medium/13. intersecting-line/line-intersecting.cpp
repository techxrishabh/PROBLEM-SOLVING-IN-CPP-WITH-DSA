        
    // *       *
    //  *     *
    //   *   *
    //    * *
    //     *
   

#include <iostream>
using namespace std;
int main(){
    int nsp = 1;
    for (int i = 0; i <= 5; i++)
    {
        for (int j = 5-i; j <= 4; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= 1; k++)
        {
            cout << "*";
        }
        for (int l = 1; l <= 12-nsp; l++)
        {
            cout << " ";
        }
        for (int m = 1; m <= 1; m++)
        {
            cout << "*";
        }
        
    cout << "\n";
    nsp = nsp + 2;
        
        
    }
    
}