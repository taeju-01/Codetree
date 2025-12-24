#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string a;
    cin>>a;
    int len=a.length();
    char c=a[1];
    for(int i=0;i<len;i++){
        if(a[i]==c){
            a[i]=a[0];
        }
    }
    cout<<a;
    return 0;
}