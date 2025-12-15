#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    int cnt=65;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<char(cnt);
            
            if(cnt==90)
            cnt=64;
            cnt++;
        }
        cout<<endl;
    }
    return 0;
}