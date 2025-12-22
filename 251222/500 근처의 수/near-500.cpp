#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a[10];

    for(int i=0;i<10;i++){
        cin>>a[i];
 
    }
    int max=1;
    int min=1000;
    
    for(int i=0;i<10;i++){
        if(a[i]>max&&a[i]<500){
            max=a[i];
        }
        if(min>a[i]&&a[i]>500){
            min=a[i];
        }
    }

    
    cout<<max<<" "<<min;

    return 0;
}