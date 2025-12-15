#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a[10];
        int sum=0;
    int cnt=0;
    for(int i=0;i<10;i++){
        cin>>a[i];
    


        if(a[i]<250){
            sum+=a[i];
            cnt++;
            
        }
        else{
            break;
        }
        

    }
    cout<<fixed;
        cout.precision(1);
        // cout<<cnt<<endl;
        cout<<sum<<" "<<double(sum)/cnt;
    return 0;
}