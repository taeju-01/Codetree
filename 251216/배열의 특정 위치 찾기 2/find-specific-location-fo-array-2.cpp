#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10];
    int sum=0;
    int sum_1=0;
    for(int i=0;i<10;i++){
        cin>>arr[i];
        if((i+1)%2!=0){
            sum+=arr[i];
        }
        else{
            sum_1+=arr[i];
        }
    }
    if(sum>sum_1){
        cout<<sum-sum_1;
    }
    else{
        cout<<sum_1-sum;
    }
    return 0;
}