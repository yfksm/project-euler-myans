/*
2520 is the smallest number that can be divided by each of the numbers from 1 to
10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the
numbers from 1 to 20?
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 20;

int gcd(int x, int y) {
    if(y == 0) {
        return x;
    } else if(x == 0) {
        return y;
    }

    return gcd(y, x % y);
}

int lcm(int x, int y) { return x / gcd(x, y) * y; }

int main(void) {
    int ans = 1;

    for(int i = 2; i <= N; i++) {
        ans = lcm(ans, i);
    }

    cout << ans << endl;
    return 0;
}