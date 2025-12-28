#include <iostream>

using namespace std;

int a, b;
bool isprime(int n){
    if(n<2){
        return false;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
bool even(int n){
    int sum=0;
    int c;
    while(n>0){
        c=n%10;
        sum+=c;
        n/=10;
    }
    if(sum%2==0){
        return true;
    }
    else{
        return false;
    }
}

int main() {
    cin >> a >> b;
    int cnt=0;
    for(int i=a;i<=b;i++){
        if(isprime(i)&&even(i)){
            cnt++;
        }
    }
    cout<<cnt;

    // Please write your code here.

    return 0;
}