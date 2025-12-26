#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string a,b;
    cin>>a>>b;
    int cnt=0;
    int len=a.length();
    for(int i=0;i<len;i++){
        if(a==b){
            break;
        }
        a=a.substr(len-1,1)+a.substr(0,len-1);
        cnt++;
    }
    if(cnt==len){
        cout<<-1;
    }
    else
    cout<<cnt;
    return 0;
}