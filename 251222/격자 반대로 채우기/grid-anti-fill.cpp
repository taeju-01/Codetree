#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    int arr[n][n];
    int cnt=1;
    if(n%2==0){
    for(int j=n-1;j>=0;j--){
        if(j%2!=0){
            for(int i=n-1;i>=0;i--){
                arr[i][j]=cnt;
                cnt++;
            }
        }
        else{
            for(int i=0;i<n;i++){
                arr[i][j]=cnt;
                cnt++;
            }
        }
    }
    }
    else{
      for(int j=n-1;j>=0;j--){
        if(j%2==0){
            for(int i=n-1;i>=0;i--){
                arr[i][j]=cnt;
                cnt++;
            }
        }
        else{
            for(int i=0;i<n;i++){
                arr[i][j]=cnt;
                cnt++;
            }
        }
    }      
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}