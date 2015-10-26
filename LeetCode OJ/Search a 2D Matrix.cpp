class Solution {
public:
	bool searchMatrix(vector<vector<int>>& matrix, int target) {
		int xMax = matrix.size(), yMax;

		if (!xMax)return false;

		for (int i = 0; i<xMax; ++i)
		{
			if (matrix[i][0]>target)
			{
				if (i == 0)return false;

				yMax = matrix[i].size();
				for (int j = 0; j<yMax; ++j)
				{
					if (matrix[i - 1][j] == target)return true;
					if (matrix[i - 1][j]>target)return false;
				}
				return false;
			}
			else if (i == xMax - 1)
			{
				yMax = matrix[i].size();
				for (int j = 0; j<yMax; ++j)
				{
					if (matrix[i][j] == target)return true;
					if (matrix[i][j]>target)return false;
				}
				return false;
			}
		}
	}
};

//Runtime: 12 ms
//Your runtime beats 40.73% of cpp submissions.