class Solution {
public:
	int reverse(int x) {
		vector<int> v;
		int tmp = x;

		while (x)
		{
			v.push_back(x % 10);
			x = x / 10;
		}

		int sum = 0, size = v.size();

		// Check if it exceeded
		vector<int> max = { 2, 1, 4, 7, 4, 8, 3, 6, 4, 7 }, min = { -2, -1, -4, -7, -4, -8, -3, -6, -4, -7 };
		if (size == 10)
		{
			for (int i = 0; i<10; ++i)
			{
				if (v[i] == max[i] || v[i] == min[i])continue;
				if (v[i] > 0)
				{
					if (v[i] > max[i])return 0;
					else break;
				}
				if (v[i] < 0)
				{
					if (v[i] < min[i])return 0;
					else break;
				}
			}
		}

		for (int i = 0; i<size; ++i)sum += pow(10, size - i - 1)*v[i];
		return sum;
	}
};

//Runtime: 12 ms
//Your runtime beats 7.13% of cpp submissions.