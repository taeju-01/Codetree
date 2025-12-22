#include <iostream>

using namespace std;

int n, m;

int main() {
    cin >> n >> m;
    int arr[n][m];
    int nums=0;
    for(int j=0;j<m;j++){
        if(j%2==0){
            for(int i=0;i<n;i++){
                arr[i][j]=nums++;
            }
        }
        else{
            for(int i=n-1;i>=0;i--){
                arr[i][j]=nums++;
            }
        }
        
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // Please write your code here.

    return 0;
}
