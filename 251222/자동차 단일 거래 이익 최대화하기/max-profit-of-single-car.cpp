#include <iostream>

using namespace std;

int n;
int price[1000];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> price[i];
    }
    int max_profit=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int profit=price[j]-price[i];

            if(profit>max_profit){
                max_profit=profit;
            }
        }

    }
    cout<<max_profit;
    

    // Please write your code here.

    return 0;
}
