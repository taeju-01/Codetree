#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    for(int i=0;i<100;i++){
        cin>>a;
        if(a==1){
            cout<<"John"<<endl;
        }
        else if(a==2){
            cout<<"Tom"<<endl;
        }
        else if(a==3){
            cout<<"Paul"<<endl;
        }
        else if(a==4){
            cout<<"Sam"<<endl;
        }
        else{
            cout<<"Vacancy"<<endl;
            break;
        }
    }
    return 0;
}