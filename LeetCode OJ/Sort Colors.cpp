class Solution {
public:
	void sortColors(vector<int>& nums) {
		int r = 0, w = 0, b = 0; // label the end of different colors;
		int size = nums.size();
		for (int i = 0; i < size; ++i)
		{
			switch (nums[i])
			{
			case 0:
			{
				nums[b++] = 2;
				nums[w++] = 1;
				nums[r++] = 0;
				break;
			}
			case 1:
			{
				nums[b++] = 2;
				nums[w++] = 1;
				break;
			}
			default:
			{
				++b;
				break;
			}
			}
		}
	}
};

//Runtime: 4 ms
//Your runtime beats 4.98% of cpp submissions.