#include <iostream>

using namespace std;

string input_str;
int q;

int main() {
    cin >> input_str >> q;
    int len=input_str.length();
    for (int i = 0; i < q; i++) {
        int query_type;
        cin >> query_type;
        if(query_type==1){
            input_str=input_str.substr(1,len-1)+input_str.substr(0,1);
            cout<<input_str<<endl;
        }
        if(query_type==2){
            input_str=input_str.substr(len-1,1)+input_str.substr(0,len-1);
            cout<<input_str<<endl;
        }
        if(query_type==3){
            for(int i=len-1;i>=0;i--){
                cout<<input_str[i];
            }
            cout<<endl;
        }
    }

    // Please write your code here.

    return 0;
}
