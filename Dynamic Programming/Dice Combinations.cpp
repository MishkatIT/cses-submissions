/*
    author    : MishkatIT
    created   : Friday 2024-03-08-20.47.16
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
    int n;
    cin >> n;
    vector<ll> dp(n + 5);
    for (int i = 1; i <= min(6, n); i++) {
        dp[i] = 1;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 6; j++) {
            if (i + j <= n) {
                dp[i + j] = (dp[i + j] + dp[i] % mod) % mod;
            }
        }
    }
    cout << dp[n];
    return 0;
}


