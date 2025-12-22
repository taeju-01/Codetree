#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int nums=i;
        for(int j=0;j<n;j++){
            if(j==0){
                cout<<nums<<" ";
            }
            else{
                nums+=n;
                cout<<nums<<" ";
            }
            
        }
        cout<<endl;
    }
    return 0;
}