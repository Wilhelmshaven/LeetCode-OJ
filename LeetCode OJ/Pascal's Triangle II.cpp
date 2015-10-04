class Solution {
public:
	vector<int> getRow(int rowIndex) {
		vector<int> result;
		result.push_back(1);

		for (int i = 1; i <= rowIndex; ++i)
		{
			result.push_back(1);
			for (int j = i - 1; j>0; --j)result[j] += result[j - 1];
		}

		return result;
	}
};

//Runtime: 0 ms
//Your runtime beats 14.50% of cpp submissions.