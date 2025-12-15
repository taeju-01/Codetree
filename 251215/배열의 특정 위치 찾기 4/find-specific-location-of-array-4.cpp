#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    int sum=0;
    int cnt=0;
    for(int i=0;i<10;i++){
        cin>>a;
        if(a==0){
            break;
        }
        else if(a%2==0){
            sum+=a;
            cnt++;
        }
    }
    cout<<cnt<<" "<<sum;
    return 0;
}