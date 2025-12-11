#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int b,a;
    cin>>b>>a;
    while(b>=a){
        if(b%2==0){
            cout<<b<<" ";
        }
        b--;
    }
    return 0;
}