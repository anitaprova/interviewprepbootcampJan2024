class Solution
{
public:
	bool isAnagram(string s, string t)
	{
		map<int, int> smp; // freq of string s
		map<int, int> tmp; // freq of string t

		if (s.size() != t.size())
		{
			return false;
		}
		else
		{
			for (int i = 0; i < s.size(); i++)
			{
				smp[s[i]]++;
				tmp[t[i]]++;
			}

			map<int, int>::iterator it = tmp.begin();
			for (auto x : smp)
			{
				if (x.second != it->second ||
						smp != tmp ||
						smp.size() != tmp.size())
				{
					return false;
				}
				it++;
			}
			return true;
		}
	}
};