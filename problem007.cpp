/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that
the 6th prime is 13.

What is the 10 001st prime number?
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 200000;

vector<int> eratosthenes(int x) {
    vector<int> is_prime_number(x + 1, 1);
    is_prime_number[0] = 0;
    is_prime_number[1] = 0;

    for(int i = 2; i * i <= x; i++) {
        for(int j = 2; i * j <= x; j++) {
            is_prime_number[i * j] = 0;
        }
    }

    vector<int> prime_numbers;
    for(int i = 0; i < is_prime_number.size(); i++) {
        if(is_prime_number[i]) {
            prime_numbers.push_back(i);
        }
    }

    return prime_numbers;
}

int main(void) {
    vector<int> ans = eratosthenes(N);

    cout << ans[10000] << endl;
    return 0;
}