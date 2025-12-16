#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100];
    int count_arr[10]={0, };
    int s;
    for(int i=0;i<100;i++){
        cin>>arr[i];
        if(arr[i]==0){
            s=i;
            break;
        }
    }
    for(int i=0;i<s;i++){
        if(arr[i]>=10)
        count_arr[(arr[i]/10)]++;
    }
    for(int i=1;i<10;i++){
        cout<<i<<" - "<<count_arr[i]<<endl;
    }

    return 0;
}