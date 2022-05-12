#define _CRT_SECURE_NO_WARNINGS 1
int Factorial(const int N)
{
	int a = 1, b = N;
	if (b >= 0 && b <= 12)
	{
		for (int i = 1; i <= N; i++)
			a *= i;
		return a;
	}
	else return 0;
}