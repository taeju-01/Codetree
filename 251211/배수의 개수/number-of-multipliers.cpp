#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int cnt_3=0;
    int cnt_5=0;
    int a;
    for(int i=0;i<10;i++){
        cin>>a;
        if(a%3==0){
            cnt_3++;
        }
        if(a%5==0){
            cnt_5++;
        }
    }
    cout<<cnt_3<<" "<<cnt_5;
    return 0;
}