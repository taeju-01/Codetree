#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string a;
    cin>>a;
    int len=a.length();
    int idx;
    if(a.find("e")!=string::npos){
        idx=a.find("e");
    }
    a.erase(idx,1);
    cout<<a;
    
    return 0;
}