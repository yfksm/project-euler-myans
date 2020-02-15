/*
2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.

What is the sum of the digits of the number 2^1000?
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

int main(void) {
    int n = 1000;
    int c = 0;
    vector<int> digits(500);

    digits.at(0) = 1;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 500; j++) {
            digits.at(j) = digits.at(j) * 2 + c; //繰り上がりを加算
            c = 0; //繰り上がり値をリセット

            if(digits.at(j) / 10 != 0) { //繰り上がりがあるかどうかチェック
                c = digits.at(j) / 10;
                digits.at(j) %= 10;
            }
        }
    }

    cout << accumulate(digits.begin(), digits.end(), 0) << endl;
    return 0;
}