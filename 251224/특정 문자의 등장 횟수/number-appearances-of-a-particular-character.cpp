#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string a;
    cin>>a;
    int cnt=0;
    int cnt1=0;
    int len=a.length();
    for(int i=0;i<len;i++){
        if(a.substr(i,2)=="ee"){
            cnt++;
        }
        if(a.substr(i,2)=="eb"){
            cnt1++;
        }
    }
    cout<<cnt<<" "<<cnt1;
    return 0;
}