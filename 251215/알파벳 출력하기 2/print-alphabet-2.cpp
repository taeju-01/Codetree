#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    char cnt='A';
    for(int i=0;i<n;i++){
        for(int j=n;j<n+i;j++){
            cout<<"  ";
        }
        for(int j=0;j<n-i;j++){
            cout<<cnt<<" ";
            cnt++;
            if(cnt>'Z'){
                cnt='A';
            }
        }
        cout<<endl;
    }
    return 0;
}