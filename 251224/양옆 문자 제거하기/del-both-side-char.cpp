#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string a;
    cin>>a;
    int len=a.length();
    a.erase(1,1);
    a.erase(len-3,1);
    cout<<a;
    return 0;
}