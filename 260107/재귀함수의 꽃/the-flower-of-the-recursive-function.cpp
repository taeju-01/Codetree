#include <iostream>

using namespace std;

int N;
void number(int N){
    if(N==0)
    return;
    cout<<N<<" ";
    number(N-1);
    cout<<N<<" ";
}

int main() {
    cin >> N;
    number(N);

    // Please write your code here.

    return 0;
}