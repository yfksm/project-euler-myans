/*
The sum of the squares of the first ten natural numbers is,

12 + 22 + ... + 102 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)2 = 552 = 3025
Hence the difference between the sum of the squares of the first ten natural
numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred
natural numbers and the square of the sum.
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 100;

int main(void) {
    int sum_of_squares = 0;
    int squares_of_sum = 0;

    for(int n = 1; n <= N; n++) {
        sum_of_squares += (n * n);
        squares_of_sum += n;
    }
    squares_of_sum *= squares_of_sum;

    int ans = squares_of_sum - sum_of_squares;
    cout << ans << endl;
    return 0;
}