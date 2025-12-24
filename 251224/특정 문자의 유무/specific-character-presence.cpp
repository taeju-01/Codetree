#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string a;
    cin>>a;
    int len=a.length();
    bool exist1=false;
    bool exist2=false;
    for(int i=0;i<len;i++){
        if(a.substr(i,2)=="ee")
        exist1=true;
        if(a.substr(i,2)=="ab")
        exist2=true;
    }
    if(exist1==true){
        cout<<"Yes"<<" ";
    }
    else
    cout<<"No"<<" ";
    if(exist2==true){
        cout<<"Yes";
    }
    else
    cout<<"No";
    
    return 0;
}