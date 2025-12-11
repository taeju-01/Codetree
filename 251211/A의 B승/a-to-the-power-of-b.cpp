#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    cin>>a>>b;
    int prod=a;
    for(int i=1;i<b;i++){
        prod*=a;

    }
    cout<<prod;
    return 0;
}