#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    int a;
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>a;
        sum+=a;
    }
    string s=to_string(sum);
    int len=s.length();
    cout<<s.substr(1,len-1)+s.substr(0,1);

    return 0;
}