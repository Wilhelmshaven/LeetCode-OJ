class Solution {
public:
	int removeElement(vector<int>& nums, int val) {
		vector<int>::iterator iter;
		while (1)
		{
			iter = find(nums.begin(), nums.end(), val);
			if (iter == nums.end())break;
			nums.erase(iter);
		}
		return nums.size();
	}
};

//Runtime: 4 ms
//Your runtime beats 4.26% of cpp submissions.