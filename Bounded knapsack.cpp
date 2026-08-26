#include <bits/stdc++.h>
using namespace std;

int main()
{

    int W = 10;

    vector<int> weight = {2,3};
    vector<int> value  = {20,30};
    vector<int> quantity = {2,3};

    vector<int> dp(W + 1, 0);

    for (int i = 0; i < weight.size(); i++)
    {

        for (int w = W; w >= 0; w--)
        {

            for (int k = 1; k <= quantity[i]; k++)
            {

                if (k * weight[i] <= w)
                {

                    dp[w] = max(
                                dp[w],
                                dp[w - k * weight[i]] + k * value[i]
                            );
                }
            }
        }
    }

    cout << "Maximum Value = " << dp[W];

    return 0;
}
