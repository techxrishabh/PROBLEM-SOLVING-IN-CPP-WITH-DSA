// WAP to print reverse of a given number.

#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Input a Number : ";
    cin >> num;

    int reverse = 0;


    while (num > 0)

    {
        reverse = reverse * 10  + num%10;
        num = num/10;
        
    }
        cout << reverse;
    
    
}