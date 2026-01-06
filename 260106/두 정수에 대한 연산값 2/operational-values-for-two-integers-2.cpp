#include <iostream>

using namespace std;

int a, b;
void math(int &a,int &b){
    if(a>b){
        a*=2;
        b+=10;
    }
    else{
        a+=10;
        b*=2;
    }
}

int main() {
    cin >> a >> b;
    math(a,b);
    cout<<a<<" "<<b;

    // Please write your code here.

    return 0;
}