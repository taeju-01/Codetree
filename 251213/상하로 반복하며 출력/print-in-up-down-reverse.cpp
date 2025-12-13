#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    int sum=n+1;
    for(int i=1;i<=n;i++){
        int ii=i;
        for(int j=0;j<n;j++){
            cout<<ii;
            ii=sum-ii;
        }
        cout<<endl;
    }
    return 0;
}