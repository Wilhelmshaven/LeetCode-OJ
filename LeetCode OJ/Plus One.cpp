class Solution {
public:
	vector<int> plusOne(vector<int>& digits) {
		vector<int> result;

		size_t size = digits.size();
		size_t tmp = size - 1;
		++digits[tmp];
		while (tmp>0)
		{
			if (digits[tmp]<10)break;
			digits[tmp] = 0;
			++digits[tmp - 1];
			--tmp;
		}
		if (digits[0] == 10)
		{
			result.push_back(1);
			digits[0] = 0;
		}
		for (size_t i = 0; i<size; ++i)result.push_back(digits[i]);
		return result;
	}
};
//Runtime: 4 ms
//Your runtime beats 3.95% of cpp submissions.