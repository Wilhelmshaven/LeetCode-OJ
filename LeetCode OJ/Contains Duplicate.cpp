class Solution {
public:
	bool containsDuplicate(vector<int>& nums) {
		if (nums.empty())return false;

		sort(nums.begin(), nums.end());
		size_t size = nums.size();
		for (size_t i = 1; i<size; ++i)
		{
			if (nums[i] == nums[i - 1])return true;
		}
		return false;
	}
};

//Runtime: 36 ms
//Your runtime beats 92.57% of cpp submissions.