#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    int arr[n];
    int cout_arr[10]={0,};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout_arr[arr[i]]++;
    }
    for(int i=1;i<10;i++){
        cout<<cout_arr[i]<<endl;
    }

    return 0;
}