#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int mat_a,mat_b,eng_a,eng_b;
    cin>>mat_a>>eng_a>>mat_b>>eng_b;

    if(mat_a>mat_b&&eng_a>eng_b)
    cout<<1;
    else
    cout<<0;
    return 0;
}