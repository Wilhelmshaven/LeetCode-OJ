int addDigits(int num) {
	if (num == 0)return num;
	int tmp = num % 9;
	if (tmp == 0)return 9;
	else return tmp;
}

//Runtime: 4 ms
//Your runtime beats 18.17% of c submissions.