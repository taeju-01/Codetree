#include <iostream>

using namespace std;

string A, B;

int main() {
    cin >> A;
    cin >> B;
    int len=A.length();
    int len1=B.length();
    while(A.find(B)!=string::npos){
        if(A.find(B)!=string::npos){
            int idx=A.find(B);
            A.erase(idx,len1);
        }
    }
    cout<<A;

    // Please write your code here.

    return 0;
}
