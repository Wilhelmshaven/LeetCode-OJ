class Solution {
public:
	vector<string> summaryRanges(vector<int>& nums) {
		int size = nums.size();

		vector<string> result;
		string tmp;
		int pivot = 0, pre, i;
		while (pivot<size)
		{
			tmp.clear();
			pre = nums[pivot];
			tmp += to_string(pre);
			i = 1;
			while (pivot<size)
			{
				++pivot;
				if ((nums[pivot] - i) == pre)++i;
				else
				{
					if (i>1)
					{
						tmp += "->";
						tmp += to_string(nums[pivot - 1]);
					}
					break;
				}
			}
			result.push_back(tmp);
		}

		return result;
	}
};
//Runtime: 0 ms
//Your runtime beats 1.50% of cpp submissions.