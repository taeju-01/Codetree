#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10];
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    int max_value=0;
    for(int i=0;i<10;i++){
        if(arr[i]>max_value){
            max_value=arr[i];
        }
    }
    cout<<max_value;
    return 0;
}