#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    cin>>a>>b;
    int prod=a;
    if(b!=0){
    for(int i=1;i<b;i++){
        prod*=a;

    }
    }
    else{
        prod=1;
    }

    cout<<prod;
    return 0;
}