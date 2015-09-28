int hammingWeight(uint32_t n) {
	if (n == 0)return 0;
	uint32_t cnt = 0;
	while (n)
	{
		n &= (n - 1);
		++cnt;
	}
	return cnt;
}
//Runtime: 4 ms
//Your runtime beats 4.47% of c submissions.