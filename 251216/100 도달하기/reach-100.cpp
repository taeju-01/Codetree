#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    int arr[100];
    arr[0]=1;
    arr[1]=n;
    int c;
    for(int i=2;i<100;i++){
        arr[i]=arr[i-2]+arr[i-1];
        if(arr[i]>=100){
            c=i;
            break;
        }
    }
    for(int i=0;i<=c;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}