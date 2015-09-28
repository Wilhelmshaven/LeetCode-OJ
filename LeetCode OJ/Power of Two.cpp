bool isPowerOfTwo(int n) {
	if (n <= 0)return false;
	n &= (n - 1);
	return !n;
}

//Runtime: 4 ms
//Your runtime beats 13.66% of c submissions.