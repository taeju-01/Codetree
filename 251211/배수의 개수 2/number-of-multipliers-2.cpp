#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int cnt=0;
    int n;
    for(int i=0;i<10;i++){
        cin>>n;
        if(n%2!=0){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}