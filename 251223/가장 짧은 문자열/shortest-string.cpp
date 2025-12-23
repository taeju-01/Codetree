#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str1,str2,str3;
    cin>>str1>>str2>>str3;

    int len1=str1.length();
    int len2=str2.length();
    int len3=str3.length();

    int arr[3]={len1,len2,len3};
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<3;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    for(int i=0;i<3;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    cout<<max-min;


    return 0;
}