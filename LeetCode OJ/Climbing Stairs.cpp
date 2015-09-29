class Solution {
public:
	int climbStairs(int n) {
		if (n<2)return 1;
		vector<int> fibonacci = { 1, 1 };
		for (int i = 2; i <= n; ++i)fibonacci.push_back(fibonacci[i - 2] + fibonacci[i - 1]);
		return fibonacci[n];
	}
};

//Runtime: 0 ms
//Your runtime beats 1.77% of cpp submissions.