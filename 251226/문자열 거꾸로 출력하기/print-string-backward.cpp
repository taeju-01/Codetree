#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    while(true){
        cin>>s;
        if(s=="END")
        break;
        int len=s.length();
        for(int i=len-1;i>=0;i--){
            cout<<s[i];
        }
        cout<<endl;

    }
    return 0;
}