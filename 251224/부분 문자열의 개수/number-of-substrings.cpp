#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string a;
    string b;
    cin>>a>>b;
    int cnt=0;
    int len=a.length();
    int len1=b.length();
    for(int i=0;i<len;i++){
     if(a.substr(i,len1)==b){
        cnt++;
    }       
    }

    cout<<cnt;
    return 0;
}