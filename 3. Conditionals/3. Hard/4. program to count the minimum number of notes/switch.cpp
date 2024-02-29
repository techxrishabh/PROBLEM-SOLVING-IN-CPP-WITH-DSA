// Write a program to count the minimum number of notes in a given amount using the switch statement.
// Input 1: 510
// Output1 : notes of “500” = 1 and notes of “10” = 1


#include <iostream>
using namespace std;
int main(){
    int amount = 3888;
    int n1, n2, n5, n10, n20, n50, n100, n200, n500, n1000, n2000;
    n1 = n2 = n5 = n10 = n20 = n50 = n100 = n200 = n500 = n1000 = n2000 = 0;

    switch (amount>=2000)
    {
    case 1:
        n2000 = amount/2000; // 1
        amount = amount - (n2000*2000); // 1888
        break;
    }
    switch (amount>=1000)
    {
    case 1:
        n1000 = amount/1000; // 1
        amount = amount - (n1000*1000); // 888
        break;
    }
    switch (amount>=500)
    {
    case 1:
        n500 = amount/500; // 1
        amount = amount - (n500*500); // 388
        break;
    }
    switch (amount>=200)
    {
    case 1:
        n200 = amount/200; // 1
        amount = amount - (n200*200); // 188
        break;
    }
    switch (amount>=100)
    {
    case 1:
        n100 = amount/100; // 1
        amount = amount - (n100*100); // 88
        break;
    }
    switch (amount>=50)
    {
    case 1:
        n50 = amount/50; // 1
        amount = amount - (n50*50); // 38
        break;
    }
    switch (amount>=20)
    {
    case 1:
        n20 = amount/20; // 1
        amount = amount - (n20*20); // 18
        break;
    }
    switch (amount>=10)
    {
    case 1:
        n10 = amount/10; // 1
        amount = amount - (n10*10); // 8
        break;
    }
    switch (amount>=5)
    {
    case 1:
        n5 = amount/5; // 1
        amount = amount - (n5*5); // 3
        break;
    }
    switch (amount>=2)
    {
    case 1:
        n2 = amount/2; // 1
        amount = amount - (n2*2); // 1
        break;
    }
    switch (amount>=1)
    {
    case 1:
        n1 = amount/1; // 1
        amount = amount - (n1*1); // 0
        break;
    }
    
    cout << "Note of 1 = " << n1 << "\n" << "Note of 2 = " << n2 << "\n" << "Note of 5 = " << n5 << "\n" << "Note of 10 = " << n10 << "\n" << "Note of 20 = " << n20 << "\n" << "Note of 50 = " << n50 << "\n" << "Note of 100 = " << n100 << "\n" << "Note of 500 = " << n500 << "\n" << "Note of 1000 = " << n1000 << "\n" << "Note of 2000 = " << n2000 << "\n" << "\n";
    int totalNotes = n1 + n2 + n5 + n10 + n20 + n50 + n100 + n200 + n500 + n1000 + n2000;

    cout << "Total = " << totalNotes; 
}