#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int sum=0;
    int cnt=0;
    while(1){

        int a;
        cin>>a;
        if(a>=20&&a<30){
            break;
        }
        else{
            sum+=a;
            cnt++;
        }
    }
    cout<<fixed;
    cout.precision(2);
    cout<<double(sum)/cnt;
    return 0;
}