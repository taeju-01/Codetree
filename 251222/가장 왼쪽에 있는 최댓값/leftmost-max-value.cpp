#include <iostream>

using namespace std;




int main() {
    int N;
    cin >> N;
// int a[N];
    int a[N];
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    int m=0;
    int M=N;
    while(m<M){
        int max=0;
        int maxidx=0;
        for(int i=m;i<M;i++){
            if(a[i]>max){
                max=a[i];
                maxidx=i;
            }
        }
        cout<<maxidx+1<<" ";
        M=maxidx;
    }
    

    // Please write your code here.

    return 0;
}
