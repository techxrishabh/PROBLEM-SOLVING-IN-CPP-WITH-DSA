// Display this GP - 1,2,4,8,16,32,.. upto ‘n’ terms.

#include <iostream>
using namespace std;
int main(){

    int a = 1;
    int n = 10;

    
    for (int i = 1; i < n; i++)
    {
        cout << a << "\n";
        a = a*2;
    }

}