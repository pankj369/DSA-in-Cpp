#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//  function to calculate max profit
int maxProfit(vector<int> &prices)
{
  int maxProfit = 0;
  int bestBuy = prices[0];
  for (int i = 1; i < prices.size(); i++)
  {
    if (prices[i] > bestBuy)
    {
      maxProfit = max(maxProfit, prices[i] - bestBuy);
    }
    bestBuy = min(bestBuy, prices[i]);
  }
  return maxProfit;
}

int main()
{
  // sample input
  vector<int> prices = { 7, 1, 5, 3, 6, 4 };
  // call the function and display result
  int result = maxProfit(prices);
  cout << "Maximum Profit : " << result << endl;
  return 0;
}