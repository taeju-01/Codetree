#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    cin>>a>>b;
    int s;
    int count_arr[4]={0, };
    while(a>0){
        s=a%b;
        a=a/b;
        count_arr[s]++;
    }
    int sum=0;
    for(int i=0;i<4;i++){
        sum=sum+(count_arr[i]*count_arr[i]);
    }
    cout<<sum;
    return 0;
}