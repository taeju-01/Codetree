#include <iostream>
#include <string>

using namespace std;

int main() {
    string A;
    cin >> A;

    int len = A.length();
    int cnt = 1;
    string result = "";

    for (int i = 1; i < len; i++) {  
        if (A[i] == A[i - 1]) {
            cnt++;
        } else {
            result += A[i - 1];        // 문자 추가
            result += to_string(cnt);  // 개수 추가
            cnt = 1;
        }
    }


    result += A[len - 1];
    result += to_string(cnt);

   
    cout << result.length() << "\n";
    cout << result << "\n";

    return 0;
}


