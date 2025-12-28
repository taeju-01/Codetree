#include <iostream>

using namespace std;

int a, b;
int math(int a,int b){
    for(int i=0;i<b;i++){
        a*=a;
    }
    cout<<a;
}

int main() {
    cin >> a >> b;
    math(a,b);

    // Please write your code here.

    return 0;
}