#include <iostream>

using namespace std;

int n;
void printstar(int n){
    if(n==0){
        return;
    }
    printstar(n-1);
    for(int i=0;i<n;i++){
        cout<<"*";
    }
    cout<<endl;
}

int main() {
    cin >> n;
    printstar(n);

    // Please write your code here.

    return 0;
}