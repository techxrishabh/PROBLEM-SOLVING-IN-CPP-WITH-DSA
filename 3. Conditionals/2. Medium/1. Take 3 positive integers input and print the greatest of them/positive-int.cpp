// Take 3 positive integers input and print the greatest of them

#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cout << "Enter three numbers : ";
    cin >> a >> b >> c;
    if (a > b && a > c) cout << "The greatest number is : " << a;
    else if(b>a && b>c) cout << "The greatest number is : " << b;
    else cout << "The greatest number is : " << c;
}