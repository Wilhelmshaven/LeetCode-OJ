class Solution {
public:
	bool isAnagram(string s, string t) {
		size_t sizeS = s.size(), sizeT = t.size();

		if (sizeS != sizeT)return false;
		if (sizeS == 0)return true;

		vector<int> cntS(26), cntT(26);

		for (size_t i = 0; i<sizeS; ++i)
		{
			++cntS[s[i] - 97];
			++cntT[t[i] - 97];
		}
		for (size_t i = 0; i<26; ++i)
		{
			if (cntS[i] != cntT[i])return false;
		}
		return true;
	}
};

//Runtime: 12 ms
//Your runtime beats 53.84% of cpp submissions.