#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long

void Solve()
{
    int n, W;
    cin >> n >> W;
    vector<ll> dp(n * 1000 + 1, LLONG_MAX);
    dp[0] = 0;
    for (int i = 0; i < n; i++)
    {
        ll wt, vl;
        cin >> wt >> vl;
        for (int j = n * 1000; j >= 0; j--)
        {
            if (j + vl > n * 1000)
                continue;
            if (dp[j] == LLONG_MAX)
                continue;
            dp[j + vl] = min(dp[j + vl], dp[j] + wt);
        }
    }
    ll ans = 0;
    for (int j = n * 1000; j >= 0; j--)
    {
        if (dp[j] <= W)
        {
            ans = j;
            break;
        }
    }
    cout << ans << '\n';
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    for (int i = 1; i <= t; i++)
    {
        Solve();
    }
    return 0;
}
