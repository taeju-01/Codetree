#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    cin>>s;
    int len=s.length();
    for(int i=0;i<len;i++){
        if(isdigit(s[i])!=0){
            cout<<s[i];
        }
        else if(isalpha(s[i])!=0){
            cout<<(char)tolower(s[i]);
        }
    }

    return 0;
}