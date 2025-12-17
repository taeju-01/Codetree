#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    int arr[n];
    int cnt=0;
    int d;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==2){
            cnt++;
            if(cnt==3){
                d=i;
            }
            
        }
    
    }
    cout<<d+1;
    return 0;
}