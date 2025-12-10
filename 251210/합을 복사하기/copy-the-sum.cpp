#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a=1,b=2,c=3;
    int d=a+b+c;
    a=d;
    b=d;
    c=d;
    cout<<a<<" "<<b<<" "<<c;
    return 0;
}