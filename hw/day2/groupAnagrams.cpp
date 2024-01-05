class Solution
{
public:
	vector<vector<string>> groupAnagrams(vector<string> &strs)
	{
		vector<vector<string>> answer;
		unordered_map<string, vector<string>> map;

		for (auto x : strs)
		{
			string temp = x;
			sort(temp.begin(), temp.end());
			map[temp].push_back(x);
		}

		for (auto x : map)
		{
			answer.push_back(x.second);
		}
		return answer;
	}
};