#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    string a;
    int cnt=0;
    for(int i=0;i<200;i++){
        cin>>s;
        if(s=="0"){
            break;
        }
        cnt++;
        if(i%2==0){
            a+=s;
            a+="\n";
        }
    }
  
    cout<<cnt<<endl;;
    cout<<a;

    return 0;
}