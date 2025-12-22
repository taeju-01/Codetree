#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[2][4];
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
  
    double row[2];
    double col[4];
    for(int i=0;i<2;i++){
          double sum_1=0;
        for(int j=0;j<4;j++){
             sum+=arr[i][j];
        }
        cout<<fixed;
        cout.precision(1);
        row[i]=sum / 4;
        cout<<row[i]<<" ";
    }
    for(int j=0;j<4;j++){
        double sum_2=0;
        for(int i=0;i<2;i++){
            sum+=arr[i][j];
        }
        col[j]=sum_1/2;
        cout<<col[i]<<" ";
    }
    
    return 0;
}