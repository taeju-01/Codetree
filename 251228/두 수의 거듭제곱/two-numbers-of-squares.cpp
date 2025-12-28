#include <iostream>

using namespace std;

int a, b;
int math(int a,int b){
    int c=1;
    for(int i=0;i<b;i++){
        c*=a;
    }
    return c;
}

int main() {
    cin >> a >> b;
    cout<<math(a,b);

    // Please write your code here.

    return 0;
}