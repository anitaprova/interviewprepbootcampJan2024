class Solution
{
public:
	vector<vector<int>> threeSum(vector<int> &nums)
	{
		sort(nums.begin(), nums.end());
		set<vector<int>> answers;

		for (int i = 0; i < nums.size(); i++)
		{
			int k = i + 1;
			int j = nums.size() - 1;
			while (k < j)
			{
				if (nums[i] + nums[k] + nums[j] == 0)
				{
					answers.insert({nums[i], nums[k], nums[j]});
					k++;
					j--;
				}
				else if (nums[i] + nums[k] + nums[j] < 0)
				{
					k++;
				}
				else
				{
					j--;
				}
			}
		}

		vector<vector<int>> v;
		for (auto x : answers)
		{
			v.push_back(x);
		}
		return v;
	}
};