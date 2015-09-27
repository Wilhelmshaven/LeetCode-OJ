int countPrimes(int n) {
	int prime[150000];
	prime[0] = 2;
	prime[1] = 3;

	int pivot = 2;
	int flag;
	int s, i, j;

	for (i = 6; i <= n; i = i + 6)
	{
		s = sqrt(i) + 1;
		flag = 1;
		for (j = 2; j < pivot; j++)
		{
			if (prime[j]>s)break;
			if ((i - 1) % prime[j] == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			prime[pivot] = i - 1;
			++pivot;
		}

		flag = 1;
		for (j = 2; j < pivot; j++)
		{
			if (prime[j]>s)break;
			if ((i + 1) % prime[j] == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			prime[pivot] = i + 1;
			++pivot;
		}
	}

	if (prime[pivot - 1] >= n)--pivot;

	if (n > 3)return pivot;
	if (n < 3)return 0;
	if (n == 3)return 1;

}

//Runtime: 236 ms
//Your runtime beats 24.12% of c submissions