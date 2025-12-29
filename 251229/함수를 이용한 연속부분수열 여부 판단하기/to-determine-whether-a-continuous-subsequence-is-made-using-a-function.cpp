#include <iostream>

using namespace std;

int n1, n2;
int a[100], b[100];
bool straight(int n1,int n2){
    int idx;
    for(int i=0;i<n1;i++){
        
        if(a[i]==b[0]){
            idx=i;
            break;
        }
        
    }
    for(int i=idx;i<idx+n2;i++){
        if(a[i]!=b[i-idx]){
            return false;
        }  
    }
    return true; 

}

int main() {
    cin >> n1 >> n2;

    for (int i = 0; i < n1; i++) cin >> a[i];

    for (int i = 0; i < n2; i++) cin >> b[i];
    if(straight(n1,n2)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    

    // Please write your code here.

    return 0;
}