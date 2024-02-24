#include <iostream>
using namespace std;
int main(){
    int p = 1;
    int q = 2;
    int r = 2;

    cout << (p==q==r) << "\n" ; // 0
    cout << (p==(q==r)); // 1  here its under the bracket means it will first do the calculation of bracket 

    // first it will check if p == q if it is then it will give true (1) else give false (0)

}