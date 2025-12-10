#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int mat_a,eng_a,mat_b,eng_b;
    cin>>mat_a>>eng_a>>mat_b>>eng_b;
    if(mat_a>mat_b)
    cout<<"A";
 
    else if(mat_a==mat_b){
        if(eng_a>eng_b){
            cout<<"A";
        }
        else
        cout<<"B";
    }
       else
    cout<<"B";

    return 0;
}