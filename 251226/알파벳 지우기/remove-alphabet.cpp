#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string a,b;
    cin>>a>>b;
    string str1,str2;
    int len1=a.length();
    int len2=b.length();
    for(int i=0;i<len1;i++){
        if(a[i]>='0'&&a[i]<='9'){
            str1+=a[i];
        }
    }
    for(int i=0;i<len2;i++){
        if(b[i]>='0'&&b[i]<='9'){
            str2+=b[i];
        }
    }
    cout<<stoi(str1)+stoi(str2);
    return 0;
}