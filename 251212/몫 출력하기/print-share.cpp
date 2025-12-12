#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    int cnt=0;
    for(int i=0;i<100;i++){
        cin>>a;
        if(a%2!=0){
            continue;
        }
        else {
            a/=2;
            cnt++;
            cout<<a<<endl;
            if(cnt==3){
                break;
            }
        }

    }
    return 0;
}