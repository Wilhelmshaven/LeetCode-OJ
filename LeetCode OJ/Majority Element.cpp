class Solution {
public:
	int majorityElement(vector<int>& nums) {
		int container = 0;
		int cnt = 0;

		size_t size = nums.size();
		for (size_t i = 0; i<size; ++i)
		{
			if (nums[i] == container)
			{
				++cnt;
				continue;
			}
			else
			{
				--cnt;
				if (cnt<0)
				{
					container = nums[i];
					cnt = 0;
				}
			}
		}

		return container;
	}
};

//Runtime: 16 ms
//Your runtime beats 82.04% of cpp submissions.