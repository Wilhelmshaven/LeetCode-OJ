class Solution {
public:
	void moveZeroes(vector<int>& nums) {
		int cnt = nums.size();

		vector<int>::iterator iter;

		size_t i = 0;
		while (cnt)
		{
			iter = nums.begin();
			if (nums[i] == 0)
			{
				iter = iter + i;
				nums.erase(iter);
				nums.push_back(0);
			}
			else ++i;
			--cnt;
		}
	}
};

//Runtime: 20 ms
//Sorry. We don't have enough accepted submissions.