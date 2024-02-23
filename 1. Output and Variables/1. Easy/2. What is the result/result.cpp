// What is the result of the following code fragment?

#include <iostream>
using namespace std;

int main(){
    bool p = false;
    bool q = false;
    bool r = true;
    

    cout<<(p==q==r); // will give error
}