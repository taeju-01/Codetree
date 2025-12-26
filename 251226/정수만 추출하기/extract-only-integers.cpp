#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string s1,s2;
    cin>>s1>>s2;
    string a="";
    string b="";
    int len1=s1.length();
    int len2=s2.length();
    for(int i=0;i<len1;i++){
        if(s1[i]>='0'&&s1[i]<='9'){
            a+=s1[i];
        }
        else{
            break;
        }
    }
    for(int i=0;i<len2;i++){
        if(s2[i]>='0'&&s2[i]<='9'){
            b+=s2[i];
        }
        else{
            break;
        }
    }  
   
    int out=stoi(a)+stoi(b);
    cout<<out;

    return 0;
}