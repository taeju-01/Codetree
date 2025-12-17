#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    cin>>a>>b;
    int arr_a[100];
    int arr_b[100];
    for(int i=0;i<a;i++){
        cin>>arr_a[i];
    }
    for(int i=0;i<b;i++){
        cin>>arr_b[i];
    }
    int d;
    for(int i=0;i<a;i++){
        bool success =true;
        for(int j=0;j<b;j++){
            if(i+j>=a){
                success=false;
                break;
            }
            if(arr_a[i+j]!=arr_b[j]){
                success = false;
                break;
            }
        }
        if(success){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
    return 0;
}