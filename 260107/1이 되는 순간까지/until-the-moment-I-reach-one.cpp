#include <iostream>

using namespace std;

int N;
int number(int N){
    if(N==1)
    return 0;
    if(N%2==0){
        return number(N/2)+1;
    }
    else{
        return number(N/3)+1;
        
    }
}

int main() {
    cin >> N;
    cout<<number(N);

    // Please write your code here.

    return 0;
}