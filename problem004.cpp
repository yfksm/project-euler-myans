/*
A palindromic number reads the same both ways. The largest palindrome made from
the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1000;

int main(void) {
    int ans = 0;

    for(int x = 100; x < N; x++) {
        for(int y = 100; y < N; y++) {
            string S = to_string(x * y);
            string reversed_S = S;
            reverse(reversed_S.begin(), reversed_S.end());

            if(S == reversed_S) {
                ans = max(ans, x * y);
            }
        }
    }

    cout << ans << endl;
    return 0;
}