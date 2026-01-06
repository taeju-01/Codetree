#include <iostream>

using namespace std;

int N;
void number1(int N){
    if(N==0){
        return;
    }
    number1(N-1);
    cout<<N<<" ";
}
void number2(int N){
    if(N==0){
        return;
    }
    cout<<N<<" ";
    number2(N-1);
}

int main() {
    cin >> N;
    number1(N);
    cout<<endl;
    number2(N);

    // Please write your code here.

    return 0;
}