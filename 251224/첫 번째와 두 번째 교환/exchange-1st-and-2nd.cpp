#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string a;
    cin>>a;
    char a_1=a[0];
    char a_2=a[1];
    int len=a.length();
    for(int i=0;i<len;i++){
        if(a[i]==a_1){
            a[i]=a_2;
        }
        else if(a[i]==a_2){
            a[i]=a_1;
        }
    }
    cout<<a;
    return 0;
}