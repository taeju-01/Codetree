#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char sym_a,sym_b,sym_c;
    int tem_a,tem_b,tem_c;
    cin>>sym_a>>tem_a>>sym_b>>tem_b>>sym_c>>tem_c;
    int cnt=0;
    if(sym_a=='Y'&&tem_a>=37)
    cnt++;   
    if(sym_b=='Y'&&tem_b>=37)
    cnt++; 
    if(sym_c=='Y'&&tem_c>=37)
    cnt++; 

    if(cnt>=2)
    cout<<"E"; 
    else
    cout<<"N";
    return 0;
}