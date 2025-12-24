#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string a;
    cin>>a;
    int len=a.length();
    int n;
    while(len>1){
        
        cin>>n;
        if(len<=n){
            a.erase(len-1,1);
            len--;
            
        }
        else{
            a.erase(n,1);
            len--;
            
        }
        cout<<a<<endl;
    }
    return 0;
}