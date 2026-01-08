#include <iostream>

using namespace std;

int a, b, c;
int total(int result){
    if(result==0){
        return 0;
    }
    return total(result/10)+result%10;
}

int main() {
    cin >> a >> b >> c;
    int result=a*b*c;
    cout<<total(result);


    // Please write your code here.

    return 0;
}