class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
		string result;

		if (strs.empty())return result;

		int minSize = 999999, size = strs.size(), pivot = 0;
		for (int i = 0; i<size; ++i)if (minSize>strs[i].length())minSize = strs[i].length();

		char c;
		bool flag = true;
		while (pivot<minSize)
		{
			c = strs[0][pivot];
			for (int i = 1; i<size; ++i)
			{
				if (strs[i][pivot] != c)
				{
					flag = false;
					break;
				}
			}
			if (flag)result.push_back(c);
			else break;

			++pivot;
		}

		return result;
	}
};

//Runtime: 4 ms
//Your runtime beats 36.50% of cpp submissions.