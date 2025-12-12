#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    bool satisfied=false;
    for(int i=0;i<5;i++){
        int a;
        cin>>a;
        if(a%3!=0){
            satisfied=true;
        }
    }
    if(satisfied==false){
        cout<<1;
    }
    else{
        cout<<0;
    }
    return 0;
}