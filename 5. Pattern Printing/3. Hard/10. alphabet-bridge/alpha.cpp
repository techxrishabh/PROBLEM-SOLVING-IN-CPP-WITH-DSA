// Alphabet Bridge 

// A B C D E F G
// A B C   E F G
// A B       F G
// A           G


#include <iostream>
using namespace std;
int main(){
    int nsp = 0;
    int t = 1;
    for (int i = 65; i <= 71; i++)
    {
        cout << (char)i << " ";
    }
    cout << "\n";
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 65; j <= 67-nsp; j++)
        {
            cout << (char)j << " ";
        }
        for (int k = 1; k <= t; k++)
        {
            cout << "  ";
        }
        for (int x = 69+nsp; x <= 71; x++)
        {
            cout << (char)x << " ";
        }
        
        
    cout << "\n";
    nsp = nsp + 1;
    t = t + 2;
        
    }
    
    
}