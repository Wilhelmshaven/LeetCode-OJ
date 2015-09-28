int countDigitOne(int n) {
	if (n<1)return 0;

	long ten = 1, cnt = 0, right, left, now;

	while (n / ten != 0)
	{
		right = n%ten;          //High NUM
		left = n / (ten * 10);  //Low NUM
		now = (n / ten) % 10;   //Now Dight

		if (now == 0)cnt = cnt + left*ten;
		else if (now == 1)cnt = cnt + left*ten + 1 + right;
		else cnt = cnt + (left + 1)*ten;

		ten = ten * 10;
	}

	return cnt;
}

//Runtime: 0 ms
//Your runtime beats 1.67% of c submissions.