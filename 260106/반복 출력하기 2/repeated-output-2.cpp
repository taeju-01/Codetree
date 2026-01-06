#include <iostream>

using namespace std;

int N;
void printworld(int N){
    if(N==0){
        return;
    }
    printworld(N-1);
    cout<<"HelloWorld"<<endl;
}

int main() {
    cin >> N;
    printworld(N);

    // Please write your code here.

    return 0;
}