#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    cin>>s;
    int len=s.length();
    int a='A'-'a';
    for(int i=0;i<len;i++){
        if(s[i]>='a'&&s[i]<='z'){
            cout<<(char)(s[i]+a);
        }
        else if(s[i]>='A'&&s[i]<='Z'){
            cout<<(char)(s[i]-a);
        }
    }
    return 0;
}