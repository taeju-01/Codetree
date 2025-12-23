#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char c;
    cin>>c;
    int cnt=0;
    string arr[5]={"apple","banana","grape","blueberry","orange"};
    for(int i=0;i<5;i++){
        if(arr[i][2]==c||arr[i][3]==c){
            cout<<arr[i]<<endl;
            cnt++;
        }

    }
    cout<<cnt;
    return 0;
}