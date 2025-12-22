#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int min=100;
    for(int i=n;i>=0;i--){
        for(int j=i-1;j>=0;j--){
            int minus=a[i]-a[j];

            if(minus<min){
                min=minus;
            }
        }
    }
    cout<<min;
    return 0;
}