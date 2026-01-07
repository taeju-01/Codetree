#include <iostream>

using namespace std;

int N;
int total(int N){
    if(N==1){
        return 1;
    }
    return total(N-1)+N;
}

int main() {
    cin >> N;
    cout<<total(N);

    // Please write your code here.

    return 0;
}