#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    int n;
    cin>>str;
    cin>>n;
    if(n<str.length()){
    for(int i=str.length()-1;i>=str.length()-n;i--){
        cout<<str[i];
    }
    }
    else{
        for(int i=str.length()-1;i>=0;i--){
            cout<<str[i];
        }
    }
    return 0;
}