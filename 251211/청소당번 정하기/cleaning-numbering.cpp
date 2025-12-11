#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int cnt_a=0;
    int cnt_b=0;
    int cnt_c=0;
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        if(i%12==0){
            cnt_c++; 
        }
        else if(i%3==0){
            cnt_b++;
        }
        else if(i%2==0){
            cnt_a++;
        }
    }
    cout<<cnt_a<<" "<<cnt_b<<" "<<cnt_c;
    return 0;
}