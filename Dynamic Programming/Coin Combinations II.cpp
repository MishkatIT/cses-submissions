/*
    author    : MishkatIT
    created   : Saturday 2024-03-09-00.22.16
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
    vector<ll> v(n), dp(x + 5, 0);
    for (auto& i : v) {
        cin >> i;
    }
    dp[0] = 1;
    for (int j = 0; j < n; j++) {
        for (int i = 1; i <= x; i++) {
            if (i - v[j] >= 0) {
                dp[i] = (dp[i - v[j]] + dp[i]) % mod;
            }
        }
    }
    cout << dp[x];
    return 0;
}
