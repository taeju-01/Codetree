#include <iostream>

using namespace std;

int n, m;

int main() {
    cin >> n >> m;

    // Please write your code here.
    int arr[n][m];
    int cnt=1;
    for(int sum=0;sum<n+m+1;sum++){
        for(int i=0;i<n;i++){
            if(sum-i>=0&&sum-i<m)
            arr[i][sum-i]=cnt++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
