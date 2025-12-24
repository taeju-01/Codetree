#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string arr;
    int n;
    cin>>arr>>n;
    int len=arr.length();
    int q,a,b;
    char x,y;

    for(int i=0;i<n;i++){
        cin>>q;
        if(q==1){
            cin>>a>>b;
            char temp=arr[a-1];
            arr[a-1]=arr[b-1];
            arr[b-1]=temp;
            cout<<arr<<endl;
        }
        if(q==2){
            cin>>x>>y;
            for(int i=0;i<len;i++){
                if(arr[i]==x){
                    arr[i]=y;
                }
            }
            cout<<arr<<endl;
        }

    }
    return 0;
}