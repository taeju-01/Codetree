#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    int sum=n+1;
    for(int i=1;i<=n;i++){
        for(int j=0;j<n;j++){
            cout<<i;
            i=sum-i;
        }
        cout<<endl;
    }
    return 0;
}