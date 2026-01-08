#include <iostream>

using namespace std;

int N;
int number(int N){
    if(N==1)
    return 1;
    if(N==2)
    return 2;

    return number(N/3)+number(N-1);
}

int main() {
    cin >> N;
    cout<<number(N);

    // Please write your code here.

    return 0;
}