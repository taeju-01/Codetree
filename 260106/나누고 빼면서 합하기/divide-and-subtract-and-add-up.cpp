#include <iostream>

using namespace std;

int n, m;
int A[100];
int math(int *A,int m){
    int sum=0;
    while(true){
        sum+=A[m-1];

        if(m==1){
            break;
        }
        
        if(m%2!=0){
        m-=1;
        }
        else{
        m/=2;
        }
    }
    return sum;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
        
    }

    cout<<math(A,m);
    
    

    // Please write your code here.

    return 0;
}