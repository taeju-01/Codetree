#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    for(int i=1;i<=2*n;i++){
        if(i%2==0){
            for(int j=i/2;j<=n;j++){
                cout<<"* ";
            }
        }
        else{
            for(int j=(2*n-i)+i/2;j<2*n;j++){
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    return 0;
}