// Write a program to count the minimum number of notes in a given amount using the if-else statement.
// Input 1: 510
// Output1 : notes of “500” = 1 and notes of “10” = 1

#include <iostream>
using namespace std;
int main(){
    int n = 3888;
    int n1 = 0;
    int n2 = 0;
    int n5 = 0;
    int n10 = 0;
    int n20 = 0;
    int n50 = 0;
    int n100 = 0;
    int n200 = 0;
    int n500 = 0;
    int n1000 = 0;
    int n2000 = 0;


    if (n>=2000)
    {
        n2000 = n/2000;
        n -= (2000*n2000);
    }
    if (n>=1000)
    {
        n1000 = n/1000;
        n -= (1000*n1000);
    }
    if (n>=500)
    {
        n500 = n/500;
        n -= (500*n500);
    }
    if (n>=200)
    {
        n200 = n/200;
        n -= (200*n200);
    }
    if (n>=100)
    {
        n100 = n/100;
        n -= (100*n100);
    }
    if (n>=50)
    {
        n50 = n/50;
        n -= (50*n50);
    }
    if (n>=20)
    {
        n20 = n/20;
        n -= (20*n20);
    }
    if (n>=10)
    {
        n10 = n/10;
        n -= (10*n10);
    }
    if (n>=5)
    {
        n5 = n/5;
        n -= (5*n5);
    }
    if (n>=2)
    {
        n2 = n/2;
        n -= (2*n2);
    }
    if (n>=1)
    {
        n1 = n/1;
        n -= (1*n1);
    }

    int totalNotes = n1 + n2 + n5 + n10 + n20 + n50 + n100 + n200 + n500 + n1000 + n2000;

    cout << totalNotes; 

}