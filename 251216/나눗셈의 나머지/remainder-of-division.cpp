#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    cin>>a>>b;
    int s;
    int arr[100];
    arr[0]=a;
    int count_arr[11]={};
    for(int i=0;i<100;i++){
        if(arr[i]<=0)
        break;
        arr[i+1]=arr[i]/b;
        count_arr[arr[i]%b]++;
        
    }
    int sum=0;
    for(int i=0;i<10;i++){
        s=count_arr[i]*count_arr[i];
        sum+=s;
    }
    cout<<sum;
  
    
    return 0;
}