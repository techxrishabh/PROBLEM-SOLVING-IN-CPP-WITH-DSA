// Half Diamond Star Pattern


// *
// **
// ***
// ****
// ***
// **
// *


#include <iostream>
using namespace std;
int main(){
    for (int i = 1; i <= 7; i++){

        if(i<=4){
            for (int j = 1; j <= i; j++)
            {
                cout << "*";
            }
            
        } else {
            for (int k = 8-i; k > 0; k--)
            {
                cout << "*";
            }
            
        }
        cout << "\n";

    }

    
    
}

