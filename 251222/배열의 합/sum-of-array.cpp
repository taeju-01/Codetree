#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    for(int i=0;i<4;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            cin>>n;
            sum+=n;
        }
        cout<<sum<<endl;
    }

    return 0;
}