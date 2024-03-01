// Write a program to print all the ASCII values and their equivalent characters of 26 alphabets using a
// while loop.

// 'A'  =>  65              'a' =>  97              '0' =>  48
// 'B'  =>  66              'b' =>  98              '1' =>  49
// 'C'  =>  67              'c' =>  99              '2' =>  50
// .                         .                       .
// .                         .                       .
// .                         .                       .
// .                         .                       .
// 'Z'  =>  90              'z' =>  122             '9' =>  57

#include <iostream>
using namespace std;
int main(){

    int i = 65;
    while(i<=90){
        cout << i << " = " << char(i) << "\n";
        i++;
    }
}