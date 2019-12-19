/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

const LL SUBJECT = 600851475143LL;

vector<LL> calculate_divisors(LL x) {
    vector<LL> res;
    for(LL n = 1; n * n <= x; n++) {
        if(n * n == x) {
            res.push_back(n);
        } else if(x % n == 0) {
            res.push_back(n);
            res.push_back(x / n);
        }
    }
    return res;
}

bool is_prime_number(LL x) {
    bool res = x <= 1 ? false : true;

    for(LL i = 2; i < x; i++) {
        if(x%i == 0){
            res = false;
            break;
        }
    }

    return res;
}

int main(void) {
    vector<LL> divisors = calculate_divisors(SUBJECT);
    sort(divisors.rbegin(), divisors.rend()); //降順にソート

    for(LL i = 0; i < divisors.size(); i++) {
        if(is_prime_number(divisors[i])) { //最初に見つけた素数 = 最大の素数
            cout << divisors[i] << endl;
            return 0;
        }
    }

    return 1;
}