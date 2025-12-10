#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    
    int a,b,x;
    char c;
    cin>>a>>c>>b>>c>>x;
    int temp;
    temp=b;
    b=x;
    x=temp;
    cout<<"0"<<a<<c<<b<<c<<x;
    return 0;
}