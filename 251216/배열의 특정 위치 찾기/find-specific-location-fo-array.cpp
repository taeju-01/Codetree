#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10];
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    int sum=0;
    int avg=0;
    int cnt=0;
    for(int i=0;i<10;i++){
        if((i+1)%2==0){
            sum+=arr[i];
        }
        if((i+1)%3==0){
            avg+=arr[i];
            cnt++;
        }
    }
    cout<<fixed;
    cout.precision(1);
    cout<<sum<<" "<<double(avg)/cnt;
    return 0;
}