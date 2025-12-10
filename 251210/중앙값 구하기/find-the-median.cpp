#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,c;
    cin>>a>>b>>c;
    if((b>a&&c>b)||(b>c&&b<a))
    cout<<b;
    else if((a<c&&c<b)||(b<c&&c<a))
    cout<<c;
    else
    cout<<a;

    return 0;
}