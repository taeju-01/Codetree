#include <iostream>

using namespace std;

int a, b, c;
int small(int a,int b,int c){
    int idx;
    if(a>b){
        if(b>c){
            idx=c;
        }
        else{
            idx=b;
        }
    }
    else if(b>c){
        if(c>a){
            idx=a;
        }
        else{
            idx=c;
        }
    }
    else if(c>a){
        if(a>b){
            idx=b;
        }
        else{
            idx=a;
        }
    }
    return idx;

}

int main() {
    cin >> a >> b >> c;
    cout<<small(a,b,c);

    // Please write your code here.

    return 0;
}