#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,c;
    cin>>a>>b>>c;
    if(a<b){
        if(b<c)
        cout<<b;
        else
        cout<<c;
    }
    else if(b>c){
        if(a>b)
        cout<<b;
        else
        cout<<a;
    }
    else if(c>a){
        if(b>a)
        cout<<b;
        else
        cout<<a;
    }
    

    return 0;
}