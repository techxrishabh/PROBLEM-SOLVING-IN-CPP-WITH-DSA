//  Print the sum of this series :
// 1 - 2 + 3 - 4 + 5 - 6… upto ‘n’.

#include <iostream>
using namespace std;
int main(){
    int n;
    int sum = 0;
    cout << "Enter the number : ";
    cin >> n;


    for (int i = 1; i <= n; i++)
    {
        if (i%2==0)
        {
            sum = sum + i - 2*i;

        } else {

            sum = sum - (i - 2*i);
        }
        
    }
    
        cout << sum;
}