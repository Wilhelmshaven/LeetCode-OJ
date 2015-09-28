class Solution {
public:
	int lengthOfLastWord(string s) {
		int length = s.length();

		if (length == 0)return 0;

		int end = length - 1, begin;
		while (s[end] == ' ' && end >= 0)--end;
		if (end == -1)return 0;

		begin = end;
		while (s[begin] != ' ' && begin >= 0)--begin;
		return end - begin;
	}
};

//Runtime: 4 ms
//Your runtime beats 2.54% of cpp submissions.