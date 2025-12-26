#include <iostream>
#include <cctype>
using namespace std;

int main() {
    // Please write your code here.
    string a;
    cin>>a;
    int len=a.length();
    int sum=0;
    for(int i=0;i<len;i++){
        if(isdigit(a[i])!=0){
            sum+=(a[i]-'0');
        }
    }
    cout<<sum;

    return 0;
}