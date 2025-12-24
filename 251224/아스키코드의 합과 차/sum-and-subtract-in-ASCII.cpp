#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char a,b;
    cin>>a>>b;
    cout<<(int)a+b<<" ";
    if((int)a>(int)b){
        cout<<(int)a-b;
    }
    else{
        cout<<(int)b-a;
    }
    return 0;
}