#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n = 4;
    int W = 8;

    vector<int> weight = {2,3,4,5};
    vector<int> value  = {3,4,5,6};

    vector<int> dp(W + 1, 0);

    for (int w = 0; w <= W; w++)
    {
        for (int i = 0; i < n; i++)
        {

            if (weight[i] <= w)
            {
                dp[w] = max(dp[w], value[i] + dp[w - weight[i]]);
            }
        }
    }

    cout << "Maximum Value = " << dp[W];

    return 0;
}
