#define _CRT_SECURE_NO_WARNINGS 1
int Count_Digit(const int N, const int D)
{
	int n, k = 0, a[10], S = 1, s = 1, V;
	if (N < 0)
		n = -N;
	else if (N == 0)
		return 1;
	else n = N;
	V = n;
	while (V != 0)
	{
		V /= 10;
		k++;
	}

	for (int i = 1; i<k; i++)
		s *= 10;
	a[0] = n / s;
	a[k - 1] = n % 10;
	for (int i = 1; i<k - 1; i++)//赋值给a[]
	{
		int v = 1;
		for (int j = 0; j < k - i - 1; j++)//10的次方项
			v *= 10;
		a[i] = n / v % 10;
	}
	int cn = 0;
	for (int i = 0; i<k; i++)
	if (a[i] == D)
		cn++;
	return cn;
}
