
// 1
// 1 3
// 1 3 5
// 1 3 5 7

#include <iostream>
using namespace std;
int main(){
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 2*i; j=j+2)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
    
}