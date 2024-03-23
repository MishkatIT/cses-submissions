/*
    author    : MishkatIT
    created   : Saturday 2024-03-09-00.57.14
*/

#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';

using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 1e6 + 10;
const ll inf    = 1e9;
const ll linf   = 1e18;
vector<int> dp(N, -1);
int mn (int n)
{
    if (n < 10) {
        return 1;
    }
    if (dp[n] != -1) {
        return dp[n];
    }
    string str;
    str = to_string(n);
    int ans = inf;

    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '0') continue;
        ans = min(ans, 1 + mn(n - (int)(str[i] - '0')));
    }

    return dp[n] = ans;
}

int main()
{
    fio;
    int n;
    cin >> n;
    cout << mn(n);
    return 0;
}


