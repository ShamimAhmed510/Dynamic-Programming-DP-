#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4;
    int W = 7;

    vector<int> weight = {1, 3, 4, 5};
    vector<int> value  = {1, 4, 5, 7};

    vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));

    for (int i = 1; i <= n; i++)
    {
        for (int w = 0; w <= W; w++)
        {

            if (weight[i - 1] <= w)
            {
                dp[i][w] = max(
                               dp[i - 1][w],
                               value[i - 1] + dp[i - 1][w - weight[i - 1]]
                           );
            }
            else
            {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    cout << "Maximum Value = " << dp[n][W];

    return 0;
}
