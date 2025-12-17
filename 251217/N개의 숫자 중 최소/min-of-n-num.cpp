#include <iostream>

using namespace std;

int N;
int A[100];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    int min_value=A[0];
    for(int i=0;i<N;i++){
        if(min_value>A[i]){
            min_value=A[i];
        }

    }
    int cnt=0;
    for(int i=0;i<N;i++){
        if(A[i]==min_value){
            cnt++;
        }
    }
    cout<<min_value<<" "<<cnt;

    // Please write your code here.

    return 0;
}
