// WAP to count digits of a given number.

// here we dont know exactly how many time we need to use loops thats the condition where we have to use while loops 

#include <iostream>
using namespace std;
int main(){
    int count = 0;
    int Number;
    cout << "Enter the Number : ";
    cin >> Number;

    
    while (Number > 0)
    {
        Number = Number/10;
        count++;
    }

    if (Number == 0)
    {
        cout << count;
    }
    

    
}