#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10];
    int c;
    for(int i=0;i<10;i++){
        cin>>arr[i];
        if(arr[i]%3==0){
            c=i;
            break;
        }
    }
    cout<<arr[c-1];
    return 0;
}