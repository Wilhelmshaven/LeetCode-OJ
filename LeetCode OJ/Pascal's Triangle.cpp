class Solution {
public:
	vector<vector<int>> generate(int numRows) {
		vector<vector<int>> result;
		if (numRows == 0)return result;

		vector<int> line = { 1 };
		result.push_back(line);
		for (int i = 1; i<numRows; ++i)
		{
			line.resize(i + 1);
			line[0] = line[i] = 1;
			for (int j = 1; j<i; ++j)line[j] = result[i - 1][j - 1] + result[i - 1][j];
			result.push_back(line);
		}

		return result;
	}
};

//Runtime: 0 ms
//Your runtime beats 18.46% of cpp submissions.