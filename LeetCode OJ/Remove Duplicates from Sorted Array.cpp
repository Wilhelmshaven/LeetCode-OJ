class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		if (nums.empty())return 0;

		int value = nums[0];
		size_t i = 1, size = nums.size();
		vector<int>::iterator iter;
		while (i<size)
		{
			iter = nums.begin() + i;
			if (value != nums[i])
			{
				value = nums[i];
				++i;
			}
			else
			{
				nums.erase(iter);
				--size;
			}
		}

		return nums.size();
	}
};

//Runtime: 56 ms
//Your runtime beats 11.09% of cpp submissions.