#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    int sum=0;
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
    return 0;
}