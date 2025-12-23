#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    char c;
    getline(cin,str);
    cin>>c;
    int len=str.length();
    int cnt=0;
    for(int i=0;i<len;i++){
        if(str[i]==c){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}