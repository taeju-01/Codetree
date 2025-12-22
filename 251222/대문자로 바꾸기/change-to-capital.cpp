#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int err='a'-'A';
    char a;
    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            cin>>a;
            cout<<(char)(a-err)<<" ";
        }
        cout<<endl;
    }

    
    return 0;
}