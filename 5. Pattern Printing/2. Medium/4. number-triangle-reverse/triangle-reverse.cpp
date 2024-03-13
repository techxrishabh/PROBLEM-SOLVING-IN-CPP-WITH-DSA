// Input: n = 4
// Output:

// 1 2 3 4
// 1 2 3
// 1 2
// 1


#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number : ";
    cin >> n;

    for (int i = n; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            cout << i-(j-1) << " ";
        }
        
        cout << "\n";
    }
    
}