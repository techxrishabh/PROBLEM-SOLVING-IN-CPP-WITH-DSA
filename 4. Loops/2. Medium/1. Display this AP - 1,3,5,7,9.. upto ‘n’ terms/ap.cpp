// Display this AP - 1,3,5,7,9.. upto ‘n’ terms. 

// a = 1

// d = 2

// n = 1 + (n-1)d
// n = 1 + 2(n-1)
// n = 1 + 2n - 2
// n = 2n + 1

#include <iostream>
using namespace std;
int main(){
    int n = 4;
    int d = 2;
    int a = 1;
    for (int i = 0; i < n; i++)
    {
        cout << 2*i+1 << "\n";
    }
    
}