/*
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a^2 + b^2 = c^2
For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/
#include <bits/stdc++.h>
using namespace std;

const int TRIPLET_TERMS = 1000;

int main(void) {
    int ans = 0;

    for(int a = 0; a <= TRIPLET_TERMS; a++) {
        for(int b = a + 1; b <= TRIPLET_TERMS; b++) {
            double c = sqrt(a * a + b * b);
            if(a + b + c == TRIPLET_TERMS) {
                ans = a * b * c;
            }
        }
    }

    cout << ans << endl;
    return 0;
}