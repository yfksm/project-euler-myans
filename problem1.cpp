#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int N = 1000;

    int ans = 0;
    for(int i = 1; i < N; i++) {
        if(i%3 == 0 or i%5 == 0){
            ans += i;
        }
    }

    cout << ans << endl;
    return 0;
}