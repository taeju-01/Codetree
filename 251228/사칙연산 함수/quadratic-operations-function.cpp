#include <iostream>

using namespace std;

int a;
int c;
char o;
int math(int a,char o,int c){
    if(o=='+'){
        return a+c;
    }
    if(o=='-'){
        return a-c;
    }
    if(o=='*'){
        return a*c;
    }
    if(o=='/'){
        return a/c;
    }
    return 0;
}

int main() {
    cin >> a >> o >> c;
    if(math(a,o,c)!=0){
        cout<<a<<" "<<o<<" "<<c<<" = "<<math(a,o,c);
    }
    else{
        cout<<"False";
    }

    
    

    // Please write your code here.

    return 0;
}