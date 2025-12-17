#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100];
    int d;

    for(int i=0;i<100;i++){
        cin>>arr[i];
        // cout<<arr[i]<<endl;
        if(arr[i]==999||arr[i]==-999){
            d=i;
            break;
        }

    }
    
    int max_value=arr[0];
    int min_value=arr[0];
    for(int i=0;i<d;i++){
        if(arr[i]>max_value){
            max_value=arr[i];
        }
    }
    for(int i=0;i<d;i++){
        if(min_value>arr[i]){
            min_value=arr[i];
        }
    }
    cout<<max_value<<" "<<min_value;
    return 0;
}