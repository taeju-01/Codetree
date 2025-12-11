#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    cin>>a>>b;
    int d;
    int c=a/b;
    cout<<c<<".";
    int k=a%b;
    k=k*10;
    int L=k/b;
    for(int i=1;i<21;i++){
        cout<<L;
    k=k%b;
    k=k*10;
    L=k/b;
    
    }

      
    

    return 0;
}