class Solution {
public:
	string intToRoman(int num) {
		string qian[4] = { "", "M", "MM", "MMM" };
		string bai[10] = { "", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM" };
		string shi[10] = { "", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC" };
		string ge[10] = { "", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX" };

		string result = qian[num / 1000] + bai[num / 100 % 10] + shi[num / 10 % 10] + ge[num % 10];
		return result;
	}
};
//Runtime: 40 ms
//Your runtime beats 19.48% of cpp submissions.