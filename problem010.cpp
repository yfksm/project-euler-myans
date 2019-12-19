/*
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/
#include <bits/stdc++.h>
using namespace std;

const int THRESHOLD = 2000000;

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
    vector<int> prime_numbers = eratosthenes(THRESHOLD);
    long long ans = accumulate(prime_numbers.begin(), prime_numbers.end(), 0LL);

    cout << ans << endl;
    return 0;
}