#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    cin>>a>>b;
    int c=a+b;
    string str=to_string(c);
    int len=str.length();
    int cnt=0;
    for(int i=0;i<len;i++){
        if(str[i]=='1'){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}