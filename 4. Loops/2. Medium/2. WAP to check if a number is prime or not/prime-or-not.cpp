// WAP to check if a number is prime or not

#include <iostream>
using namespace std;
int main(){

    int number;
    int count = 0;

    cout << "Enter the Number : ";
    cin >> number;


    for (int i = 1; i <= number; i++)
    {
        if(number%i == 0){
            count++;
        }
        
    }
        
    if (count == 2)
    {
        cout << "The Number is a Prime-Number";
    } else {
        cout << "The Number is not a Prime-Number";
    }
    

}