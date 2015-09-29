class Solution {
public:
	int singleNumber(vector<int>& nums) {
		int result = nums[0];
		size_t size = nums.size();
		for (size_t i = 1; i<size; ++i)result ^= nums[i];
		return result;
	}
};

//Runtime: 16 ms
//Your runtime beats 85.53% of cpp submissions.