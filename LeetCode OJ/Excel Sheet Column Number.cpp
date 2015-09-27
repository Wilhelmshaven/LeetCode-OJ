class Solution {
public:
	int titleToNumber(string s) {
		int length = s.length();
		int colNum = 0;

		for (int i = 0; i<length; ++i)colNum += (s[i] - 64)*pow(26, length - i - 1);

		return colNum;
	}
};

//Runtime: 12 ms
//Your runtime beats 4.76% of cpp submissions.