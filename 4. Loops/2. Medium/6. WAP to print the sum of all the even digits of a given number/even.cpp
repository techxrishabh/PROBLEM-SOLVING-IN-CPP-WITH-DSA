// WAP to print the sum of all the even digits of a given number
// Sample Input : 4556 ==> Here the even digits are 4 and 6 so the sum of 6 and 4 is 10
// Output: 10

#include <iostream>
using namespace std;
int main(){
    int num;
    int digit;
    int sum = 0;
    cout << "Enter the Number : ";
    cin >> num;

    while (num > 0)
    {
        digit = num % 10;
        if(digit%2==0){
            sum = sum + digit;
        }
        num = num/10;
    }
    
        cout << sum;
}