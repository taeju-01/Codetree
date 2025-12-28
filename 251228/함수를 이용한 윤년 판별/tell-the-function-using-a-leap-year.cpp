#include <iostream>

using namespace std;

int y;
bool Isyoonyear(int y){
    if(y%400==0){
        return true;
    }
    else if(y%100==0){
        return false;
    }
    else if(y%4==0){
        return true;
    }
    else{
        return false;
    }
}

int main() {
    cin >> y;
    if(Isyoonyear(y)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

    // Please write your code here.

    return 0;
}