#include <iostream>
#include <string>

using namespace std;

string A;
void small(string A){
    int cnt=0;
    for(int i=1;i<A.length();i++){
        if(A[i-1]!=A[i]){
            cnt++;
        }
    }
    if(cnt>=2){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}

int main() {
    cin >> A;
    small(A);

    // Please write your code here.

    return 0;
}