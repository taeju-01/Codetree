#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int score;
    cin>>score;
    string result=score==100 ? "pass":"failure";
    cout<<result;
    return 0;
}