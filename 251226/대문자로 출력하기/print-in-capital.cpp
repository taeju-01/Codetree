#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    cin>>s;
    int a='A'-'a';
    int len=s.length();
    for(int i=0;i<len;i++){
        if(s[i]>='A'&&s[i]<='Z'){
            cout<<s[i];
        }
        else if(s[i]>='a'&&s[i]<='z'){
            cout<<(char)(s[i]+a);
        }
    }
    return 0;
}