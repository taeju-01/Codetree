#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string a;
    cin>>a;
    int L=a.length();
    for(int i=0;i<=L;i++){
        cout<<a<<endl;
        a=a.substr(L-1,1)+a.substr(0,L-1);
    }
    return 0;
}