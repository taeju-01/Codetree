#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    string s=to_string(n);
    string a;
    int len=s.length();
    int sum=0;
    for(int i=0;i<len;i++){
        sum+=(s[i]-'0');
        
    }

    cout<<sum;
    return 0;
}