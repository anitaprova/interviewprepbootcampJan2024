class Solution
{
public:
	vector<int> twoSum(vector<int> &numbers, int target)
	{
		int i = 0;
		int j = numbers.size() - 1;
		while (i <= j)
		{
			if (numbers[i] + numbers[j] == target)
			{
				return {i + 1, j + 1};
			}
			else if (numbers[i] + numbers[j] > target) // too big
			{
				j--;
			}
			else // too small
			{
				i++;
			}
		}
		return {i + 1, j + 1};
	}
};