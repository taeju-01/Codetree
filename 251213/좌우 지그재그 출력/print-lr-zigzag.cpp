#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    int cnt=1;
    int cnt_1=1;
    for(int i=1;i<=n;i++){
        
        if(i%2!=0){
            for(int j=0;j<n;j++){
                cout<<cnt<<" ";
                cnt++;
            }
            cnt=((cnt-1)*2)+1;
        }
        else{
            cnt_1=n*i;
        for(int j=1;j<=n;j++){
            
            cout<<cnt_1<<" ";
            cnt_1--;
            
        }
        }
        cout<<endl;
    }
    return 0;
}