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
  
    cout<<count_arr[0]*count_arr[0]+count_arr[1]*count_arr[1]+count_arr[2]*count_arr[2]+count_arr[3]*count_arr[3];
    return 0;
}