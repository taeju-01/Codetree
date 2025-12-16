#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100];
    int sum=0;
    int cnt=0;
    for(int i=0;i<100;i++){
        cin>>arr[i];
        cnt++;
        if(arr[i]==0){
            
            break;
        }
    
    }
    // cout<<cnt<<endl;
    for(int j=cnt-4;j<=cnt-2;j++){
        sum+=arr[j];

    }
    cout<<sum;
    
    return 0;
}