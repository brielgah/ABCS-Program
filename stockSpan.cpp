#include <bits/stdc++.h>
using namespace std;

vector<int> StockSpan(vector<int> prices)
{
    stack<pair<int, int>> stock;
    vector<int> ans(prices.size(), 1);
    for (int x = 0; x < (int)prices.size(); x++)
    {
        int days = 1;
        while (!stock.empty() && prices[x] >= stock.top().first)
        {
            stock.pop();
        }
        days = stock.empty() ? x + 1 : x - stock.top().second;
        ans[x] = days;
        stock.push({prices[x], x});
    }
    return ans;
}

int main()
{
    vector<int> numbers = {10, 4, 5, 90, 120, 80};
    StockSpan(numbers);
}