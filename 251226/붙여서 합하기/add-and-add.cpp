#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string a,b;
    cin>>a>>b;
    string s1=a+b;
    string s2=b+a;
    int out=stoi(s1)+stoi(s2);
    cout<<out;
    return 0;
}