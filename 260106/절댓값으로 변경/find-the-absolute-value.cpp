#include <iostream>

using namespace std;

int n;
int arr[50];
bool absolute(int arr){
    if(arr<0){
        return true;
    }
    return false;
}
int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if(absolute(arr[i])){
            cout<<-1*arr[i]<<" ";
        }
        else{
            cout<<arr[i]<<" ";
        }
    }
    

    // Please write your code here.

    return 0;
}