int trailingZeroes(int n) {
	int countFive = 0;
	int i;
	while (n >= 5)
	{
		n = n / 5;
		countFive = countFive + n;
	}
	return countFive;

}

//Runtime: 6 ms
//Your runtime beats 3.43% of c submissions.