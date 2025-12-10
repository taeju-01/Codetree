#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    cin>>a>>b;
    if(a>=90){
        if(b>=95){
            cout<<10;
        }
        else(b>=90){
            cout<<5;
        }
    }
    else
    cout<<0;
    return 0;
}