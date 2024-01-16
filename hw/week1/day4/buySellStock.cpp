class Solution
{
public:
	int maxProfit(vector<int> &prices)
	{
		// indexes
		int sell = 0;
		int buy = 0;
		int profit = 0;

		for (int i = 0; i < prices.size(); i++)
		{
			if (prices[i] < prices[buy]) // buying
			{
				buy = i;
				sell = i;
			}

			if (i != 0 && prices[sell] < prices[i])
			{
				sell = i;
			}
			profit = max(profit, prices[sell] - prices[buy]);
		}

		return profit;
	}
};