// Write a program to print out all Armstrong numbers between 1 and 500. If the sum of cubes of
// each digit of the number is equal to the number itself, then the number is called an Armstrong
// number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 )

// Output :

// 1
// 153
// 370
// 371
// 407

#include <iostream>
using namespace std;
int main(){

    for (int i = 1; i <= 500; i++)
    {
        int num = i;
        int arm = 0;
        while (num>0)
        {
            int strong = num % 10;
            arm = arm + strong * strong * strong;
            num = num/10;
        }
        
         if(arm == i){
            cout << i << "\n";

            } 
        
        

    }
    

}