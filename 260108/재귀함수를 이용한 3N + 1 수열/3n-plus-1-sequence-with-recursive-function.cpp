#include <iostream>

using namespace std;

int n;
int number(int n){
    if(n==1)
    return 0;
    if(n%2==0)
    return number(n/2)+1;
    else
    return number((n*3)+1)+1;
}

int main() {
    cin >> n;
    cout<<number(n);

    // Please write your code here.

    return 0;
}