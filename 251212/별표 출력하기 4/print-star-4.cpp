#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=n;i>1;i--){
        for(int j=i;j<=n+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}