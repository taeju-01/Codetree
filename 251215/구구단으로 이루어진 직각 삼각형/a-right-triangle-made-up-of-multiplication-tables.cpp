#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    for(int i=n;i>0;i--){
        for(int j=1;j<=i;j++){
            if(j==i){
                cout<<n-i+1<<" * "<<j<<" = "<<(n-i+1)*j<<endl;
            }
            else{
                cout<<n-i+1<<" * "<<j<<" = "<<(n-i+1)*j<<" / ";

            }
        }
    }
    return 0;
}