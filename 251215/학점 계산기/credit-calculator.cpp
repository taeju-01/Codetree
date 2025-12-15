#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    double sum=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        double score;
        cin>>score;
        sum+=score;
        cnt++;
    }
    cout<<fixed;
    cout.precision(1);
    cout<<double(sum)/cnt<<endl;
    if(double(sum)/cnt>=4.0)
    cout<<"Perfect";
    else if(double(sum)/cnt>=3.0)
    cout<<"Good";
    else
    cout<<"Poor";
    return 0;
}