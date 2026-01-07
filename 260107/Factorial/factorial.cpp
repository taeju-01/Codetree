#include <iostream>

using namespace std;

int N;
int F(int N){
    if(N==1)
    return 1;

    return F(N-1)*N;
}

int main() {
    cin >> N;
    cout<<F(N);

    // Please write your code here.

    return 0;
}