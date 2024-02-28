// Any year is input through the keyboard. Write a program to determine whether the year is a leap year
// or not. 

#include <iostream>
using namespace std;
int main(){
    int x;
    cout << "Enter a Number : ";
    cin >> x;
    if (x%4!=0){
        cout << "Its not a leap year";
    } else if (x%100){
        cout << "Its a leap year";
    } else if(x%400){
        cout << "not a leap year";
    } else {
        cout << "leap year";
    }

}