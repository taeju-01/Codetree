#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    char c;
    while(1){
        cin>>a>>b>>c;
        if(c!='C'){
            cout<<a*b<<endl;
        }
        else{
            cout<<a*b<<endl;
            break;
        }
    }
    return 0;
}