/*
    author    : MishkatIT
    created   : Friday 2024-03-08-22.09.34
*/

#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';

using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 2e5 + 10;
const ll inf    = 1e9;
const ll linf   = 1e18;

int main()
{
    fio;
    int n, x;
    cin >> n >> x;
    vector<int> v(n), dp(x + 5, 0);
    for (auto& i : v) {
        cin >> i;
        if (i <= x) {
            dp[i] = 1;
        }
    }
    for (int i = 1; i <= x; i++) {
        for (auto& j: v) {
            if (i + j <= x) {
                dp[i + j] = (dp[i + j] + dp[i] % mod) % mod;
            }
        }
    }

    cout << dp[x];
    return 0;
}


