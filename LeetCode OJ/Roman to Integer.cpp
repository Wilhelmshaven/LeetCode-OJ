class Solution {
public:
	int romanToInt(string s) {
		int sum = 0;
		vector<int> mark;
		size_t size = s.size();

		for (size_t i = 0; i<size; ++i)mark.push_back(searchRoman(s[i]));
		mark.push_back(-1);

		for (size_t i = 0; i < size; ++i)
		{
			if (mark[i] >= mark[i + 1])sum += searchList(mark[i]);
			else sum -= searchList(mark[i]);
		}

		return sum;
	}
private:
	int searchList(int index)
	{
		switch (index)
		{
		case 0:
			return 1;
		case 1:
			return 5;
		case 2:
			return 10;
		case 3:
			return 50;
		case 4:
			return 100;
		case 5:
			return 500;
		case 6:
			return 1000;
		default:
			return 0;
		}
	}

	size_t searchRoman(char c)
	{
		string roman = { "IVXLCDM" };
		for (size_t i = 0; i<7; ++i)
		{
			if (c == roman[i])return i;
		}
	}
};

//想让可读性更好一些，结果慢了12ms...算了
//Runtime: 48 ms
//Your runtime beats 41.07% of cpp submissions.