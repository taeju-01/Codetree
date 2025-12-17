#include <iostream>

using namespace std;

int N;
int nums[1000];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }
    int max=1000;
    int count[max+1]={};
    for(int i=0;i<N;i++){
        count[nums[i]]++;
    }
    int answer=-1;
    for(int a=1000;a>=0;a--){
        if(count[a]==1){
            answer=a;
            break;
        }
    }
    cout<<answer;
    
    // Please write your code here.

    return 0;
}
