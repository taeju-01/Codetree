#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a[10];
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
    int a_1[10];
    int a_2[10];
    
    for(int i=0;i<10;i++){
        if(a[i]<500){
            a_1[i]=a[i];
            

        }
        if(a[i]>500){
            a_2[i]=a[i];
        }
        // cout<<a_1[i]<<" ";
        
        
        cout<<a_2[i]<<" ";
    }
    
    int max=a_1[0];
    int min=a_2[0];
    for(int i=0;i<10;i++){
        if(a_1[i]>max){
            max=a_1[i];
        }

    }
    for(int i=0;i<10;i++){
        if(min>a_2[i]&&a_2[i]){
            min=a_2[i];
        }
    }
    
    // cout<<min;

    return 0;
}