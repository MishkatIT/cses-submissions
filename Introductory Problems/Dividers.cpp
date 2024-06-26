/*
    author    : MishkatIT
    created   : Wednesday 2023-07-05-22.20.40
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;
const ll N = 1e5 + 10;
const ll inf = 1e9;
const ll linf = 1e18;
int main()
{
    fio;
    ll n;
    cin >> n;
    ll sum = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j * j <= i; j++)
            if(i % j)
            {
                sum += j % mod;
                if(i / j != j)
                    sum += j % mod;
            }
    }
    cout << sum;
    return 0;
}

