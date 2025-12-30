#include <iostream>
#include <string>

using namespace std;

string A;
bool Ispalindrome(string s){
    int len=s.length();
    string a;
    for(int i=len-1;i>=0;i--){
        a+=s[i];
    }
    if(s==a){
        return true;
    }
    else{
        return false;
    }
}

int main() {
    cin >> A;
    if(Ispalindrome(A)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    
    

    // Please write your code here.

    return 0;
}