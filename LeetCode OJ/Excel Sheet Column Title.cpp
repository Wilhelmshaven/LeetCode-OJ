class Solution {
public:
	string convertToTitle(int n) {
		string result;
		stack<int> s;

		int c;
		while (n)
		{
			c = n % 26;
			if (c == 0)c = 26;      // That's the key. Use Z instead of Zero.
			s.push(c + 64);
			n = (n - c) / 26;       // That's the key.
		}

		while (!s.empty())
		{
			c = s.top();
			result.push_back(c);
			s.pop();
		}

		return result;
	}
};

//Runtime: 0 ms
//Your runtime beats 0.46% of cpp submissions.