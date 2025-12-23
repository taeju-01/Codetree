#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i].length();
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        
            if(arr[i][0]=='a'){
                cnt++;
            }
        
    }
    cout<<sum<<" "<<cnt;
    return 0;
}