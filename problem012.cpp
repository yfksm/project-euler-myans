#include <bits/stdc++.h>
using namespace std;

vector<int> make_divisors(int x) {
    vector<int> res;

    for(int i = 1; i * i <= x; i++) {
        if(i * i == x) {
            res.push_back(i);
        } else if(x % i == 0) {
            res.push_back(i);
            res.push_back(x / i);
        }
    }

    return res;
}

int main(void) {
    int ans = 1, difference = 2;

    while(true) {
        if(make_divisors(ans).size() > 500) {
            break;
        } else {
            ans += difference;
            difference++;
        }
    }

    cout << ans << endl;
    return 0;
}