/*
Starting in the top left corner of a 2×2 grid, and only being able to move to
the right and down, there are exactly 6 routes to the bottom right corner.

How many such routes are there through a 20×20 grid?
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

LL combination(LL n, LL r) {
    vector<LL> denominator(n - r), numerator(r);

    for(LL i = 1; i <= r; i++) {
        denominator.at(i - 1) = i;
    }

    for(LL i = 1; i <= n - r; i++) {
        numerator.at(i - 1) = r + i;
    }

    bool can_reduction = true;
    while(can_reduction) {
        can_reduction = false;
        for(LL i = 0; i < n - r; i++) {
            for(LL j = 0; j < r; j++) {
                if(numerator.at(j) % denominator.at(i) == 0 and
                   numerator.at(j) != 1 and denominator.at(i) != 1) {
                    numerator.at(j) /= denominator.at(i);
                    denominator.at(i) = 1;
                    can_reduction = true;
                }
            }
        }
    }

    LL nume = 1;
    for(LL i = 0; i < r; i++) {
        nume *= numerator.at(i);
    }

    LL deno = 1;
    for(LL i = 0; i < n - r; i++) {
        deno *= denominator.at(i);
    }

    return nume / deno;
}

int main(void) {
    cout << combination(40, 20) << endl;
    return 0;
}