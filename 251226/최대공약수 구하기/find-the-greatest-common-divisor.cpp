#include <iostream>

using namespace std;

int n, m;
void math(int n,int m){
    int a;
    if(n>m){
        for(int i=1;i<=m;i++){
            if(n%i==0&&m%i==0){
                a=i;
            }
        }    
    }
    else{
        for(int i=1;i<=n;i++){
            if(n%i==0&&m%i==0){
                a=i;
            }
        }
    }
    cout<<a;
}

int main() {
    cin >> n >> m;
    math(n,m);
    // Please write your code here.

    return 0;
}