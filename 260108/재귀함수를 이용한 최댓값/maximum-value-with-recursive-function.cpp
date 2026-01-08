#include <iostream>

using namespace std;

int n;
int arr[100];
int getmax(int n){
    if(n==0)
    return arr[0];

    int value=getmax(n-1);
    if(value>arr[n])
    return value;
    else
    return arr[n];
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout<<getmax(n-1);

    // Please write your code here.

    return 0;
}