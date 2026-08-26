#include <bits/stdc++.h>
using namespace std;

struct Item
{
    int value, weight;
};

bool compare(Item a, Item b)
{
    double r1 = (double)a.value / a.weight;
    double r2 = (double)b.value / b.weight;
    return r1 > r2;
}

int main()
{

    vector<Item> items =
    {
        {60,10},
        {100,20},
        {120,30}
    };

    int W = 50;

    sort(items.begin(), items.end(), compare);

    double totalValue = 0;

    for (auto item : items)
    {

        if (W >= item.weight)
        {
            totalValue += item.value;
            W -= item.weight;
        }
        else
        {
            totalValue += item.value * ((double)W / item.weight);
            break;
        }
    }

    cout << "Maximum Value = " << totalValue;

    return 0;
}
