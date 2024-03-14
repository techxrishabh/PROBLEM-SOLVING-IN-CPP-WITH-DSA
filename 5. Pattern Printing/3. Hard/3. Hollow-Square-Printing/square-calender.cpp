// Sample Input : m = 4, n = 6
// hollow square
// ******
// *    *
// *    *
// ******

#include <iostream>
using namespace std;
int main(){
    for (int i = 1; i <= 7; i++)
    {
        
        
            for (int j = 1; j <= 6; j++)
            {
                if (i==1 || i==7)
                {
                    cout << "*";
                } else if (i%2!=0 && j==1 || i%2!=0 && j==6){
                    cout << "*";
                } else {
                    cout << " ";
                }
                
                
            } 
            
        
            
        cout << "\n";
        
        
    }
    
}