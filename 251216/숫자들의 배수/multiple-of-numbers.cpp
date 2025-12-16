#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    int arr[100];
    arr[0]=n;
    int cnt=0;
    for(int i=0;i<100;i++){
        arr[i+1]=arr[0]*(i+2);
        cout<<arr[i]<<" ";
        if(arr[i]%5==0){
            cnt++;
        }
        if(cnt==2){
            break;
        }



    }
    return 0;
}