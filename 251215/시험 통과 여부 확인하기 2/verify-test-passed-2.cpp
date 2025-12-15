#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    cin>>a;
    int score_a[a],score_b[a],score_c[a],score_d[a];
    int cnt=0;
    for(int i=0;i<a;i++){
        cin>>score_a[i]>>score_b[i]>>score_c[i]>>score_d[i];
        int sum[i];
        sum[i]=score_a[i]+score_b[i]+score_c[i]+score_d[i];
        if(sum[i]/4>=60){
            cout<<"pass"<<endl;
            cnt++;
        }
        else{
            cout<<"fail"<<endl;
        }
    }
    cout<<cnt;
    
    return 0;
}