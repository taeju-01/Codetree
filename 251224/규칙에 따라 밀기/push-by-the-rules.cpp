#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string a;
    cin>>a;
    int len=a.length();
    string c;
    cin>>c;
    int len1=c.length();
    for(int i=0;i<len1;i++){
        if(c[i]=='L'){
            a=a.substr(1,len-1)+a.substr(0,1);
        }
        else if(c[i]=='R'){
            a=a.substr(len-1,1)+a.substr(0,len-1);
        }
    }
    cout<<a;
    return 0;
}