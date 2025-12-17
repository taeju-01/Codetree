#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,q;
    cin>>n>>q;
    int arr[n];
    int arr_q[q];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int t,a,b;
    int d;
    for(int i=0;i<q;i++){
        cin>>t;
        if(t==3){
            cin>>a>>b;
        }
        else{
            cin>>a;
        }
        if(t==1){
            cout<<arr[a-1]<<endl;
        }
           
        if(t==2){
            int cnt=0;
            for(int i=0;i<n;i++){
                if(arr[i]==a){
                    d=i;
                    cnt++;
                    break;
                }
            }
            // cout<<cnt<<endl;
                if(cnt>=1){
                    cout<<d+1<<endl;
                }
                
                else{
                cout<<0<<endl;
                }
        }
        if(t==3){
            for(int i=a;i<=b;i++){
                cout<<arr[i-1]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}