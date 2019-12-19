#include <bits/stdc++.h>
using namespace std;

const int N_MAX = 1000;
const int THRESHOLD = 4000000;
int main(void) {
    int fib[N_MAX] = {0};
    fib[0] = 1;
    fib[1] = 1;

    int ans = 0;
    for(int i = 2; i < N_MAX; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];

        if(fib[i] > THRESHOLD){
            break;
        }

        if(fib[i]%2 == 0){
            ans += fib[i];
        }
    }

    cout << ans << endl;
    return 0;
}