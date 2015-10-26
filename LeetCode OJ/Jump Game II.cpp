class Solution {
public:
	int jump(vector<int>& nums) {
		size_t size = nums.size();
		if (size<2)return 0;

		int max = -1, cnt = 1, pivot = size - 1, tmp;
		vector<int> maxJump;
		for (size_t i = 0; i<size; ++i)
		{
			tmp = i + nums[i];
			if (tmp>max)max = tmp;
			maxJump.push_back(max);
		}

		for (int i = size - 1; i >= 0; --i)
		{
			if (maxJump[i] >= pivot)continue;
			else
			{
				++cnt;
				pivot = i + 1;
			}
		}

		return cnt;
	}
};

//Runtime: 16 ms
//Your runtime beats 17.14% of cpp submissions.