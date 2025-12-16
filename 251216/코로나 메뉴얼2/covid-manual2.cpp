#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char a;
    int b;
    int count_a=0;
    int count_b=0;
    int count_c=0;
    int count_d=0;
    for(int i=0;i<3;i++){
        cin>>a>>b;
        if(a=='Y'&&b>=37){
            count_a++;
        }
        else if(a=='N'&&b>=37){
            count_b++;
        }
        else if(a=='Y'&&b<37){
            count_c++;
        }
        else{
            count_d++;
        }
    }
    cout<<count_a<<" "<<count_b<<" "<<count_c<<" "<<count_d<<" ";
    if(count_a>=2){
        cout<<"E";
    }
    return 0;
}