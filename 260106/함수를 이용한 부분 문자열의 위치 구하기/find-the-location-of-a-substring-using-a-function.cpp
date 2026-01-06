#include <iostream>
#include <string>

using namespace std;

string text;
string pattern;
int index(string text, string pattern){
    int n=text.length();
    int m=pattern.length();
    if(m>n){
        return -1;
    }
    for(int i=0;i<=n-m;i++){
        if(text[i]==pattern[0]){
            bool ok =true;
            for(int j=1;j<m;j++){
                if(text[i+j]!=pattern[j]){
                     ok=false;
                     break;
                }
            }
            if(ok){
                return i;
            }
        }
    }
    return -1;
}

int main() {
    cin >> text;
    cin >> pattern;
    cout<<index(text,pattern);

    // Please write your code here.

    return 0;
}