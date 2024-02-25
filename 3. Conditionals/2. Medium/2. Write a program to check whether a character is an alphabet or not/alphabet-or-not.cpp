// Write a program to check whether a character is an alphabet or not.

#include <iostream>
using namespace std;
int main(){
    char x;
    x=(int)x;
    cout << "Enter a character : ";
    cin >> x;
    if(x>=97 && x<=122 || x>=65 && x<=90) cout << "Its an alphabet";
    else cout << "Its not an alphabet";
}