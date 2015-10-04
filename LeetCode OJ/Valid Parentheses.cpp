class Solution {
public:
	bool isValid(string s) {
		if (s.empty())return true;

		stack<char> myStack;
		int size = s.size();
		if (size % 2 == 1)return false;
		for (int i = size - 1; i >= 0; --i)
		{
			if (s[i] == '}' || s[i] == ']' || s[i] == ')')
			{
				myStack.push(s[i]);
				continue;
			}

			if (myStack.empty())return false;
			if (myStack.top() - s[i]>2)return false;
			else myStack.pop();
		}
		return true;
	}
};

//Runtime: 0 ms
//Your runtime beats 2.96% of cpp submissions.