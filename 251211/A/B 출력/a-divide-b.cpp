#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    cin>>a>>b;
    int d;
    int c=a/b;
    cout<<c<<".";
    for(int i=1;i<21;i++){
    d=a%b;
    d*=10;
    d=d/b;
    cout<<d;
    i++;
    }

      
    

    return 0;
}