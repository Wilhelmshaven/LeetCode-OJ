class Solution {
public:
	bool isIsomorphic(string s, string t) {
		int map[256];
		int mark[256];
		memset(map, -1, sizeof(int) * 256);
		memset(mark, 0, sizeof(int) * 256);

		bool flag = true;

		for (int i = 0; i < s.length(); i++)
		{
			if (map[s[i]] == -1)         //Empty mapping
			{
				if (mark[t[i]] == 0)     //Dest. can be mapped
				{
					map[s[i]] = t[i];
					mark[t[i]] = 1;
					continue;
				}
				else                    //Collision
				{
					flag = false;
					break;
				}
			}
			else   //Already mapped, check.
			{
				if (map[s[i]] != t[i])
				{
					flag = false;
					break;
				}
			}

		}

		return flag;
	}
};

//Runtime: 10 ms
//Your runtime beats 68.75% of cpp submissions