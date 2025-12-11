#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    int cnt=0;
    int cnt_1=0;
    for(int i=1;i<n;i++){
        
        if(i%4==0){
            cnt++;
        }
        if(i%100==0&&i%400!=0){
            cnt_1++;

        }
    }
    cout<<cnt-cnt_1;
    return 0;
}