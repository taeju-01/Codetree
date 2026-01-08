#include <iostream>

using namespace std;

int n;
int arr[10];

int gcd(int a, int b){
    if(b==0)
    return a;
    return gcd(b,a%b);
}

int lcm(int a,int b){
    return a/gcd(a,b)*b;
}

int all(int idx){
    if(idx==0)
    return arr[0];
    return lcm(all(idx-1),arr[idx]);

}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout<<all(n-1);

    // Please write your code here.

    return 0;
}