#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,m;
    cin>>n>>m;
    int arr_1[n][m];
    int arr_2[n][m];
    int arr_3[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr_1[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr_2[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr_1[i][j]==arr_2[i][j]){
                arr_3[i][j]=0;
            }
            else{
                arr_3[i][j]=1;
            }

        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr_3[i][j]<<" ";

        }
        cout<<endl;
    }
    return 0;
}