#include <iostream>

using namespace std;

int a, b;
bool contain369(int n){
    while(n>0){
        if(n%10==3||n%10==6||n%10==9){
            return true;
        }
        n/=10;
    }
    return false;
}

bool game369(int n){
    return n%3==0||contain369(n);
}

int main() {
    cin >> a >> b;
    int cnt=0;
    for(int i=a;i<=b;i++){
        if(game369(i)){
            cnt++;
        }
    }
    cout<<cnt;
    

    


    // Please write your code here.

    return 0;
}