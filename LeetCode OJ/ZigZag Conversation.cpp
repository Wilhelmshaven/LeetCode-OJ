class Solution {
public:
	string convert(string s, int numRows) {
		vector<string> record(numRows);
		string result;

		if (numRows>1)
		{
			int length = s.length();
			int line = 0, pivot = 0, flag = 1;

			while (pivot < length)
			{
				record[line].push_back(s[pivot]);

				if (line == 0)flag = 1;
				if (line == numRows - 1)flag = -1;

				if (flag > 0)++line;
				else --line;

				++pivot;
			}


			for (int i = 0; i < numRows; ++i)result += record[i];
		}
		else return s;

		return result;
	}
};

//Runtime: 24 ms
//Your runtime beats 36.56% of cpp submissions.
