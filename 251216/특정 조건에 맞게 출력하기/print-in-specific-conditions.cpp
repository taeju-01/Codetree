#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    for(int i=0;i<100;i++){
        cin>>n;
        if(n==0){
            break;
        }
        if(n%2!=0){
            cout<<n+3<<" ";
        }
        else{
            cout<<n/2<<" ";
        }
    }

    return 0;
}