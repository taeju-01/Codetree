#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int cnt=0;
    int sum=0;
    int a;
    for(int i=0;i<10;i++){
        cin>>a;
        if(a>=0&&a<=200){
            cnt++;
            sum+=a;
        }
    }
    cout<<fixed;
    cout.precision(1);
    cout<<sum<<" "<<double(sum)/cnt;
    return 0;
}