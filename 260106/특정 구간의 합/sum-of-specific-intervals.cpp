#include <iostream>

using namespace std;

int n, m;
int arr[100];
int math(int a1,int a2){
    int sum=0;
    for(int i=a1-1;i<=a2-1;i++){
        sum+=arr[i];
    }
    return sum;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < m; i++) {
        int a1, a2;
        cin >> a1 >> a2;
        cout<<math(a1,a2)<<endl;
    
    }
    // Please write your code here.

    return 0;
}