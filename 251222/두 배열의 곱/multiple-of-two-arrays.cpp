#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr_1[3][3];
    int arr_2[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr_1[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr_2[i][j];
        }
    }

    int arr_new[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr_new[i][j]=arr_1[i][j]*arr_2[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr_new[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}