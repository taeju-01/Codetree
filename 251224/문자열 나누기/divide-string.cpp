#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    string a;
    string b="";
    for(int i=0;i<n;i++){
        cin>>a;
        b=b+a;
    }
    for(int i=1;i<=b.length();i++){
        if(i%5==0){
            cout<<b[i-1]<<endl;
        }
        else
        cout<<b[i-1];
    }
    
    
    return 0;
}