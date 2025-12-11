#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    cin>>a>>b;
    int sum_5=0;
    int sum_7=0;
    int cnt_5=0;
    int cnt_7=0;
    for(int i=a;i<=b;i++){
        if(i%5==0){
            cnt_5++;
            sum_5+=i;
        }
        if(i%7==0){
            cnt_7++;
            sum_7+=i;
        }

    }
    cout<<fixed;
    cout.precision(1);
    cout<<sum_5+sum_7<<" "<<double(sum_5+sum_7)/(cnt_5+cnt_7);
    return 0;
}