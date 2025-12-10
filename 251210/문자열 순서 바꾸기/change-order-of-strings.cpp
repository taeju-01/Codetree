#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string S,T;
    cin>>S>>T;
    string temp;
    temp=S;
    S=T;
    T=temp;
    cout<<S<<endl<<T;
    return 0;
}