#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int sum(int m, int n);

int main()
{
	int m, n;

	scanf("%d %d", &m, &n);
	printf("sum = %d\n", sum(m, n));

	return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
int sum(int m, int n)
{
	int s = 0;
	for (int i = m; i <= n; i++)
		s += i;
	return s;
}