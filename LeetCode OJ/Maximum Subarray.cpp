class Solution {
public:
	int maxSubArray(vector<int>& nums) {
		int sum = 0, max = -2147483648, size = nums.size();
		for (int i = 0; i<size; ++i)
		{
			sum += nums[i];
			if (sum>max)max = sum;
			if (sum<0)sum = 0;
		}
		return max;
	}
};

//Runtime: 8 ms
//Your runtime beats 68.71% of cpp submissions.