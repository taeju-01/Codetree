#include <iostream>

using namespace std;

int n;
bool even(int n){
    return(n%2==0&&((n/10)+(n%10))%5==0);
}

int main() {
    cin >> n;
    if(even(n)){
        cout<<"Yes";
    }
    else
    cout<<"No";

    // Please write your code here.

    return 0;
}