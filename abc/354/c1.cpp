#include <bits/stdc++.h>
using namespace std;

struct Card
{
    int index;
    int strength;
    int cost;
};

bool compare(const Card &a, const Card &b)
{
    if (a.strength != b.strength)
        return a.strength < b.strength;
    return a.cost > b.cost;
}

int main()
{
    int n;
    cin >> n;

    vector<Card> cards(n);
    for (int i = 0; i < n; i++)
    {
        cin >> cards[i].strength >> cards[i].cost;
        cards[i].index = i + 1; // 1-based index
    }

    // Sort cards by strength ascending, and by cost descending if strengths are equal
    sort(cards.begin(), cards.end(), compare);

    vector<Card> remaining;
    int minCost = INT_MAX;
    for (int i = n - 1; i >= 0; --i)
    {
        if (cards[i].cost < minCost)
        {
            remaining.push_back(cards[i]);
            minCost = cards[i].cost;
        }
    }

    // Sort remaining cards by their original index to output them in the required format
    sort(remaining.begin(), remaining.end(), [](const Card &a, const Card &b)
         { return a.index < b.index; });

    cout << remaining.size() << endl;
    for (const auto &card : remaining)
    {
        cout << card.index << " ";
    }
    cout << endl;

    return 0;
}
