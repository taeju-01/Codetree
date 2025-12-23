#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n=10;
    string arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i].length();
    }
    cout<<sum;
    return 0;
}