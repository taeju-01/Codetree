#include <iostream>

using namespace std;

int N;
int number(int N){
    if(N==1)
    return 2;
    if(N==2)
    return 4;
    
    return (number(N-2)*number(N-1))%100;
}

int main() {
    cin >> N;
    cout<<number(N);

    // Please write your code here.

    return 0;
}