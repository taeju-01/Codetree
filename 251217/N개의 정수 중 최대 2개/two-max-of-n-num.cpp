#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int d;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max_value=arr[0];
    for(int i=0;i<n;i++){
        if(max_value<arr[i]){
            max_value=arr[i];
            d=i;
        }
    }
    int max_value_2=arr[0];
    for(int i=0;i<n;i++){
        if(i!=d&&max_value_2<arr[i]){
            max_value_2=arr[i];
        }

    }
    cout<<max_value<<" "<<max_value_2;
    

    return 0;
}