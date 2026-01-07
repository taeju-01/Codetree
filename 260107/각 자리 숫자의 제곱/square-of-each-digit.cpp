#include <iostream>
using namespace std;

int N;
int total(int N){
    if(N<10)
    return N*N;

    return total(N/10)+(N%10)*(N%10);
}

int main() {
    cin>>N;
    cout<<total(N);
    // Please write your code here.
    return 0;
}