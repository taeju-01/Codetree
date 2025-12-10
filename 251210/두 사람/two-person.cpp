#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a_age,b_age;
    char a,b;
    cin>>a_age>>a>>b_age>>b;
    if((a_age>=19||b_age>=19)){
        if((a=='M'||b=='M')){
            cout<<1;
        }
    
    else
    cout<<0;
    return 0;
}