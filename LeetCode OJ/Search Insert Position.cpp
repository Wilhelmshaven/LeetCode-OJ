class Solution {
public:
	int searchInsert(vector<int>& nums, int target) {
		nums.push_back(9999999);

		int size = nums.size();

		if (target<nums[0])return 0;
		if (target>nums[size - 1])return size;

		for (int i = 0; i < size - 1; ++i)
		{
			if (nums[i] == target)return i;
			if (nums[i]<target && nums[i + 1]>target)return i + 1;
		}
	}
};

//Runtime: 8 ms
//Your runtime beats 5.39% of cpp submissions.