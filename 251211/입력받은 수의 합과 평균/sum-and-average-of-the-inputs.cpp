#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    int a;
    int cnt=0;
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>a;
        cnt++;
        sum+=a;

    }
    cout<<fixed;
    cout.precision(1);
    cout<<sum<<" "<<double(sum)/cnt;
        return 0;
}