// WAP to print the sum of a given number and its reverse.

#include <iostream>
using namespace std;
int main(){
    int snum;
    int num;
    int reverse = 0;
    cout << "Enter the Number : ";
    cin >> num;
    snum = num;

    while (num > 0)
    {
        reverse = reverse * 10;
        reverse = reverse + num%10;
        num = num/10;
    }

    cout << reverse + snum << endl;
    
    

}