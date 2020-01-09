/*
The following iterative sequence is defined for the set of positive integers:

n → n/2 (n is even)
n → 3n + 1 (n is odd)

Using the rule above and starting with 13, we generate the following sequence:

13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
It can be seen that this sequence (starting at 13 and finishing at 1) contains
10 terms. Although it has not been proved yet (Collatz Problem), it is thought
that all starting numbers finish at 1.

Which starting number, under one million, produces the longest chain?

NOTE: Once the chain starts the terms are allowed to go above one million.
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

LL count_terms(LL n, LL res = 0) {
    res++;

    if(n == 1) {
        return res;
    }

    if(n % 2 == 0) {
        return count_terms(n / 2, res);
    } else {
        return count_terms(3 * n + 1, res);
    }
}

int main(void) {
    LL ans = 0;
    LL longest_chain = 0;

    for(LL n = 1; n < 1000000; n++) {
        LL chain_length_of_n = count_terms(n);
        if(chain_length_of_n > longest_chain) {
            ans = n;
            longest_chain = chain_length_of_n;
        }
    }

    cout << ans << endl;
    return 0;
}