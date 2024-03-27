// print the pattern Number Pyramid Palindrome

//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1


#include <iostream>
using namespace std;
int main(){
    int a = 1;
    int b = 3;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 3-i; j >= 0; j--)
        {
            cout << "  ";
        }
        for (int k = 1; k <= a; k++)
        {
            cout << k << " ";
            
        }
        for (int x = i; x <= i & x>0; x--)
        {
            cout << x << " ";
        }
        
        
        
        cout << "\n";
        a++;
        b++;
    }
    

}