#include <iostream>

using namespace std;

int N;
void PrintRect(int N){
    int cnt=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cnt++;
            if(cnt==10){
                cnt=1;
            }
            cout<<cnt<<" ";
        }
        cout<<endl;
    }
}

int main() {
    cin >> N;
    PrintRect(N);

    // Please write your code here.

    return 0;
}