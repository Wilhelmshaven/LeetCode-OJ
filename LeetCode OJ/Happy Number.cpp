bool isHappy(int n) {
	if (n == 0)return false;

	int mark[750];  //MAX:1999999999£¬that is 730
	for (int i = 0; i<750; ++i)mark[i] = 0;

	int sum;
	while (1)
	{
		if (n == 1)return true;
		sum = 0;
		while (n>0)
		{
			sum += pow(n % 10, 2);
			n /= 10;
		}
		if (mark[sum] == 1)return false;
		else mark[sum] = 1;
		n = sum;
	}
}
//Runtime: 4 ms
//Your runtime beats 13.44% of c submissions.