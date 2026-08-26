#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long

void Solve()
{
    int n, W;
    cin >> n >> W;
    vector<ll> dp(W + 1, 0);
    for (int i = 0; i < n; i++)
    {
        ll wt, vl;
        cin >> wt >> vl;
        for (int j = W; j >= 0; j--)
        {
            if (j + wt > W)
                continue;
            dp[j + wt] = max(dp[j + wt], dp[j] + vl);
        }
    }
    cout << *max_element(dp.begin(), dp.end()) << '\n';
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
    {
        Solve();
    }
    return 0;
}

