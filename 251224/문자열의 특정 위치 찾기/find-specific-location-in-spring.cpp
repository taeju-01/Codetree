#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string a;
    char c;
    cin>>a>>c;
    if(a.find(c)!=string::npos)
    cout<<a.find(c);
    else
    cout<<"No";
    return 0;
}