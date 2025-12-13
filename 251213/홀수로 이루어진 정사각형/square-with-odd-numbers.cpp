#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    for(int i=1;i<2*n;i+=2){
        for(int j=i;j<i+(2*n-1);j+=2){
            cout<<10+j<<" ";
        }
        cout<<endl;
    }
    return 0;
}